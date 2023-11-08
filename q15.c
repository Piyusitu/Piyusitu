#include <stdio.h>
void answer(FILE *file, int n, char ans[], int *id, char student[]) {
    fscanf(file, "%d %s\n", id, student);
    for (int i = 0; i < n; i++) {
        ans[i] = fgetc(file);
    }
}

int main() {
    FILE *input, *output;
    input = fopen("examdat.txt", "r");
    output = fopen("report.txt", "w");
    if (input == NULL || output == NULL) {
        printf("Error opening files.");
        return 1;
    }
    int numqs, id;
    fscanf(input, "%d", &numqs);
    char correct[numqs];
    char student[numqs];
    fscanf(input, "%s\n", correct);
    fprintf(output, "Exam Report\n");
    for (int i = 1; i <= numqs; i++) {
        fprintf(output, "Question %d ", i);
    }
    fprintf(output, "\nAnswer %s\nID Score(%%)\n", correct);
    int missed[numqs];
    for (int i = 0; i < numqs; i++) {
        missed[i] = 0;
    }
    while (!feof(input)) {
        answer(input, numqs, correct, &id, student);
        int score = 0;
        for (int i=0;i<numqs;i++) {
            if (student[i]==correct[i])
                score++;
            else
                missed[i]++;
        }
        fprintf(output,"%d %d\n",id,(score * 100)/numqs);
    }
    fprintf(output, "Question ");
    for (int i=0;i<numqs;i++){
        fprintf(output,"%d ",missed[i]);
    }
    fclose(input);
    fclose(output);
    return 0;
}