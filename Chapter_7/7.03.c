#include <stdio.h>

#define CANDIDATES 5

int countVotes(int votes[], int numVotes, int count[], int *spoilt) {
    for (int i = 0; i <= CANDIDATES; i++) {
        count[i] = 0;
    }
    *spoilt = 0;

    for (int i = 0; i < numVotes; i++) {
        if (votes[i] >= 1 && votes[i] <= CANDIDATES) {
            count[votes[i]]++;
        } else {
            (*spoilt)++;
        }
    }
    return 1; // Successful count
}

int main() {
    int votes[] = {1, 2, 5, 3, 2, 4, 1, 3, 5, 2, 7, 1}; // Example votes
    int numVotes = sizeof(votes) / sizeof(votes[0]);
    int count[CANDIDATES + 1], spoilt;

    countVotes(votes, numVotes, count, &spoilt);

    for (int i = 1; i <= CANDIDATES; i++) {
        printf("Candidate %d: %d votes\n", i, count[i]);
    }
    printf("Spoilt ballots: %d\n", spoilt);
    return 0;
}