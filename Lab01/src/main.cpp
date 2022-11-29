// %%writefile ejemplo01
#include <omp.h>
#include <iostream>

using namespace std;

int main(){
    int nthreads;
    int thread;
    int first = 45;
    //# pragma omp parallel private(nthreads , thread)
    # pragma omp parallel private(nthreads, thread) 
    {
        thread = omp_get_thread_num(); 
        nthreads = omp_get_num_threads(); 
        
        cout << " Hola Mundo soy el proceso / core = "<< thread << " de " << nthreads << endl;
    }
    system("PAUSE");

    return 0;
}