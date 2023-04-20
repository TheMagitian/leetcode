//Q75
void swap(int *a, int *b) {

    int c = *a;

    *a = *b;

    *b = c;

}

void sortColors(int* nums, int numsSize) {

    int i, zero, two;

    i = 0;

    zero = 0;

    two = numsSize - 1;

    while (i <= two) {

        if (nums[i] == 0) {

            swap(&nums[i], &nums[zero++]);

            i++;

        }

        else if (nums[i] == 2) {

            swap(&nums[i], &nums[two--]);

        }

        else {

            i++;

        }

    }

}

void sortColors0(int* nums, int numsSize) {

    int i, zero_count, one_count;

    zero_count = 0;

    one_count = 0;

    for (i = 0; i < numsSize; i++) {

        if (nums[i] == 0) {

            zero_count++;

        }

        if (nums[i] == 1) {

            one_count++;

        }

    }

    for (i = 0; i < zero_count; i++) {

        nums[i] = 0;

    }

    for (i = zero_count; i < zero_count + one_count; i++) {

        nums[i] = 1;

    }

    for ( ; i < numsSize; i++) {

        nums[i] = 2;

    }

}
