# SmartScheduler-DAA
UTS Algorithm Design and Analysis

Name: Serafina Alamsyair
NIM: 01087240001

OVERVIEW
For this exam problem, I have decided to use Earliest Deadline First (EDF) Algorithm as it is straightforward and relatively easy to understand. Since the problem outlines that, during peak hours, jobs were missing deadlines, I think this solution is appropriate. General steps are as follows:
1. User inputs the number of jobs with its processing time and deadlines.
2. The code will sort the jobs to a schedule so that the ones with the earliest deadlines will be executed first (urgent task).
3. The code will then calculate the completion time and lateness for the sorted jobs.
4. The code will also produce an output of the minimum possible maximum lateness (worst-case delay) to evaluate the job schedule in order to ensure that the best sorting is achieved.

EXECUTION
1. Variables are initialized as follows: (1) p is processing time; (2) d is deadline; (3) c is completion time; (4) l is lateness; (5) order is to keep track of the original job numbering; (6) time is to keep track of the cumulative time; (7) max is to keep track for maximum lateness.
2. The user will then input the number of job(s), its processing time(s), and its deadline(s), which are stored in arrays.
3. The deadline for each job will be compared. Jobs that have an earlier deadline will be swapped to sort them so that it can be executed first (EDF).
4. Completion time and lateness will then be calculated from the processing time. Lateness will be calculated as completion time less deadline. If lateness is larger than current max, the maximum lateness value will be updated.
5. The program will then print the sorted job(s) schedule and the minimum possible maximum lateness.
