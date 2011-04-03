#include <string.h>
#include <memory.h>
#include <stdio.h>
#include <malloc.h>

char* transcribeTomRNA(const char* input)
{
    // allocate 1 extra character for the terminating null.
    char* output = (char*)malloc((strlen(input) + 1) * sizeof(char));
    const char* temp = input;
    char* temp2 = output;
    char ch = '\0';

    while (ch = *temp++)
    {
        switch(ch)
        {
            case 'A':
                *temp2++ = 'U';
                break;
            case 'T':
                *temp2++ = 'A';
                break;
            case 'C':
                *temp2++ = 'G';
                break;
            case 'G':
                *temp2++ = 'C';
                break;
        }
    }

    *temp2 = '\0';
    return output;
}

char getProtein(const char** input)
{
    char output = '\0';

    if (!strnicmp(*input, "UUU", 3))
    {
        output = 'F';
    }
    else if (!strnicmp(*input, "UUC", 3))
    {
        output = 'F';
    }
    else if (!strnicmp(*input, "UUA", 3))
    {
        output = 'L';
    }
    else if (!strnicmp(*input, "UUG", 3))
    {
        output = 'L';
    }
    else if (!strnicmp(*input, "CUU", 3))
    {
        output = 'L';
    }
    else if (!strnicmp(*input, "CUC", 3))
    {
        output = 'L';
    }
    else if (!strnicmp(*input, "CUA", 3))
    {
        output = 'L';
    }
    else if (!strnicmp(*input, "CUG", 3))
    {
        output = 'L';
    }
    else if (!strnicmp(*input, "AUU", 3))
    {
        output = 'I';
    }
    else if (!strnicmp(*input, "AUC", 3))
    {
        output = 'I';
    }
    else if (!strnicmp(*input, "AUA", 3))
    {
        output = 'I';
    }
    else if (!strnicmp(*input, "AUG", 3))
    {
        output = 'M';
    }
    else if (!strnicmp(*input, "GUU", 3))
    {
        output = 'V';
    }
    else if (!strnicmp(*input, "GUC", 3))
    {
        output = 'V';
    }
    else if (!strnicmp(*input, "GUA", 3))
    {
        output = 'V';
    }
    else if (!strnicmp(*input, "GUG", 3))
    {
        output = 'V';
    }
    else if (!strnicmp(*input, "UCU", 3))
    {
        output = 'S';
    }
    else if (!strnicmp(*input, "UCC", 3))
    {
        output = 'S';
    }
    else if (!strnicmp(*input, "UCA", 3))
    {
        output = 'S';
    }
    else if (!strnicmp(*input, "UCG", 3))
    {
        output = 'S';
    }
    else if (!strnicmp(*input, "CCU", 3))
    {
        output = 'P';
    }
    else if (!strnicmp(*input, "CCC", 3))
    {
        output = 'P';
    }
    else if (!strnicmp(*input, "CCA", 3))
    {
        output = 'P';
    }
    else if (!strnicmp(*input, "CCG", 3))
    {
        output = 'P';
    }
    else if (!strnicmp(*input, "ACU", 3))
    {
        output = 'T';
    }
    else if (!strnicmp(*input, "ACC", 3))
    {
        output = 'T';
    }
    else if (!strnicmp(*input, "ACA", 3))
    {
        output = 'T';
    }
    else if (!strnicmp(*input, "ACG", 3))
    {
        output = 'T';
    }
    else if (!strnicmp(*input, "GCU", 3))
    {
        output = 'A';
    }
    else if (!strnicmp(*input, "GCC", 3))
    {
        output = 'A';
    }
    else if (!strnicmp(*input, "GCA", 3))
    {
        output = 'A';
    }
    else if (!strnicmp(*input, "GCG", 3))
    {
        output = 'A';
    }
    else if (!strnicmp(*input, "UAU", 3))
    {
        output = 'Y';
    }
    else if (!strnicmp(*input, "UAC", 3))
    {
        output = 'Y';
    }
    else if (!strnicmp(*input, "UAA", 3))
    {
        // stop codon.
        // Since output is already \0, we will return that.
    }
    else if (!strnicmp(*input, "UAG", 3))
    {
        // stop codon.
        // Since output is already \0, we will return that.
    }
    else if (!strnicmp(*input, "CAU", 3))
    {
        output = 'H';
    }
    else if (!strnicmp(*input, "CAC", 3))
    {
        output = 'H';
    }
    else if (!strnicmp(*input, "CAA", 3))
    {
        output = 'Q';
    }
    else if (!strnicmp(*input, "CAG", 3))
    {
        output = 'Q';
    }
    else if (!strnicmp(*input, "AAU", 3))
    {
        output = 'N';
    }
    else if (!strnicmp(*input, "AAC", 3))
    {
        output = 'N';
    }
    else if (!strnicmp(*input, "AAA", 3))
    {
        output = 'K';
    }
    else if (!strnicmp(*input, "AAG", 3))
    {
        output = 'K';
    }
    else if (!strnicmp(*input, "GAU", 3))
    {
        output = 'D';
    }
    else if (!strnicmp(*input, "GAC", 3))
    {
        output = 'D';
    }
    else if (!strnicmp(*input, "GAA", 3))
    {
        output = 'E';
    }
    else if (!strnicmp(*input, "GAG", 3))
    {
        output = 'E';
    }
    else if (!strnicmp(*input, "UGU", 3))
    {
        output = 'C';
    }
    else if (!strnicmp(*input, "UGC", 3))
    {
        output = 'C';
    }
    else if (!strnicmp(*input, "UGA", 3))
    {
        // stop codon.
        // Since output is already \0, we will return that.
    }
    else if (!strnicmp(*input, "UGG", 3))
    {
        output = 'W';
    }
    else if (!strnicmp(*input, "CGU", 3))
    {
        output = 'R';
    }
    else if (!strnicmp(*input, "CGC", 3))
    {
        output = 'R';
    }
    else if (!strnicmp(*input, "CGA", 3))
    {
        output = 'R';
    }
    else if (!strnicmp(*input, "CGG", 3))
    {
        output = 'R';
    }
    else if (!strnicmp(*input, "AGU", 3))
    {
        output = 'S';
    }
    else if (!strnicmp(*input, "AGC", 3))
    {
        output = 'S';
    }
    else if (!strnicmp(*input, "AGA", 3))
    {
        output = 'R';
    }
    else if (!strnicmp(*input, "AGG", 3))
    {
        output = 'R';
    }
    else if (!strnicmp(*input, "GGU", 3))
    {
        output = 'G';
    }
    else if (!strnicmp(*input, "GGC", 3))
    {
        output = 'G';
    }
    else if (!strnicmp(*input, "GGA", 3))
    {
        output = 'G';
    }
    else if (!strnicmp(*input, "GGG", 3))
    {
        output = 'G';
    }

    *input += 3;
    return output;
}

char* translateToProteins(const char* input)
{
    const char* temp = input;
    int startCoding = 0;
    while (*temp && !startCoding)
    {
        while (*temp++ != 'A');
        if (*temp && *temp++ == 'U' && *temp && *temp++ == 'G')
        {
            startCoding = true;
            break;
        }
    }

    // assuming that we will always have a multiple of 3.
    int proteinSeqLength = (temp - input + 3) / 3;

    int bufferSize = (proteinSeqLength + 1) * sizeof(char);
    // allocate 1 extra character for the terminating null.
    char* output = (char*)malloc(bufferSize);
    // zero fill the output buffer.
    memset(output, 0, bufferSize);

    char* temp2 = output;

    // we are here means we have already started coding. The first codon is always AUG which translates to M.
    *temp2 ++ = 'M';

    // scan until we have run into a stop codon or hit the end.
    // getProtein updates the pointer and returns a character representing the protein.
    while (*temp)
    {
        // stop if a stop codon is encountered.
        if((*temp2++ = getProtein(&temp)) == '\0')
        {
            break;
        }
    }

    return output;
}


void main(int argc, char* argv[])
{
    char* seq = "ACATAAAAGCGCGGGCTCGCGGCGACTCTGCACCACGCAGGGGAAGAGAAAGCAGGAGCCGTCCAGCACGGAGGAAGGCGACCATGGCCAAGGAGTGGGGCTACGCCAGTCACAACGGTCCTGACCACTGGCATGAACTTTTCCCAAATGCCAAGGGGGAAAACCAGTCGCCCGTTGAGCTGCATACTAAAGACATCAGGCATGACCCTTCTCTGCAGCCATGGTCTGTGTCTTATGATGGTGGCTCTGCCAAGACCATCCTGAATAATGGGAAGACCTGCCGAGTTGTATTTGATGATACTTATGATAGGTCAATGCTGAGAGGGGGTCCTCTCCCTGGACCCTACCGACTTCGCCAGTTTCATCTTCACTGGGGCTCTTCGGATGATCATGGCTCTGAGCACACCGTGGATGGAGTCAAGTATGCAGCGGAGCTTCATTTGGTTCACTGGAACCCGAAGTATAACACTTTTAAAGAAGCCCTGAAGCAGCGCGATGGGATCGCTGTGATTGGCATTTTTCTGAAGATAGGACATGAGAATGGCGAGTTCCAGATTTTCCTTGATGCATTGGACAAGATTAAGACAAAGGGCAAGGAGGCGCCCTTCACAAAGTTTGACCCATCCTGCCTGTTCCCGGCATGCCGGGACTACTGGACCTACCAGGGCTCATTCACCACGCCGCCCTGCGAGGAATGCATTGTGTGGCTGCTGCTGAAGGAGCCCATGACCGTGAGCTCTGACCAGATGGCCAAGCTGCGGAGCCTCCTCTCCAGTGCTGAGAACGAGCCCCCAGTGCCTCTTGTGAGCAACTGGCGACCTCCACAGCCTATCAATAACAGGGTGGTGAGAGCTTCCTTCAAATGAGGCTGCTGGATCTTGCCCTCTTCAGGAAAGGAAACCTACCATTGGAGAGCTTGGTTCCTTGCCTCCTTCTGGTGCTCCTTACTCCAAGTCTATTTCATTTTTCCACACTGAGCAATGAATGTGAGAGATGTGGTCACCAAGATCTAAGTTACTTGTTGAAAGAAAGTTACTTTCGACAAGATCTAATATGAAAGCATAGATTTCACATTTGATCTCTGTAATAATCATCTTTCCTATAAAAGTAGCATTTTTGGTAAAGTTTCAAAGAAGAAGAAACAGAGATGGAAGAGTAAAGATATTTTTAAAATGGCTAGCTATTGGGCACCAGTTTTTCTGTTATCTAAAATTTCACACAACTTCATTGTTTTTATTTTTATATTATGAGTTGTCCATCTTAAAGAAATATGAGTAATTCTACATGTAGTAGAGGTGTATGAAGATCATATAACAATTAAACATAAGCCAGAAATTAAAATGACTATAGACAGCAAGAATTGAGCTAATAATATGTTTTAACTCTTAACACCAGCAAGAAGTCAGTCATTTATTGAAGTTTTAGCTACTAAGATTACTTGGTTTTGATTACCAGTGAAAAGAAAACACAATACAATCAGGAGTTTTCAAATTTTTGATTCAGTATTTGAATTTCTTCTTCATAAATGTAGTTGAATTTATCCTAGTATTTTTCTTTACCTGAAGGAGGGCCATTTATTTTTAATTTCACTACATTTTTCTTTGCATGATTATTAAAATAAAAACTGCCTCTGTTGTGTTTCTCACTGGAGGCTGGAATGAATGATCACTAGAACACAAAAGAGTGAATGATGACACTTGAAGTCAAAGCAGTTGTACTGATCACCAGAACCAATAAAGACATAAATGGAAAA";
    printf("DNA (%d): %s\n", strlen(seq), seq);

    char* mRNA = transcribeTomRNA(seq);
    printf("mRNA (%d): %s\n\n", strlen(mRNA), mRNA);

    char* proteinSequence = translateToProteins(mRNA);
    printf("Protein (%d): %s\n\n", strlen(proteinSequence), proteinSequence);

    free(mRNA);
    free(proteinSequence);
}
