# Recursion
---------------------------------

- In Simple terms a function calling itself 
- Recursion is the technique of **making a function call itself.**
- It help in breaking down complicated problems into simpler problems.
- In Recursion few points are very important.
	- **Base condition**: a condition which defines when a fun call should be terminated/break from recursive calls.
	- Recursion Tree for different calls.
	- Call stack.
- A new record will be created for every function call, in Call Stack **[type of memory]**


**Example-1**


```c
	#include<stdio.h>
	void printName(char *name);

	int main() {
	    printName("Ram");
	    return 0;
	}

	void printName(char *name) {

	    printf("My name is %s\n", name);
	    
	    printName("Model antaru ra babu..");  
	} 
```

**Example-2**

```c
	#include<stdio.h>

	int fun(int n);

	int main() {
	    fun(5);
	    return 0;
	}

	int fun(int num) {
	    if (num == 0) 
	        return 1;
	    printf("%d\n", num);
	    fun(num-1);
	}
```


**Sum of N Number**

```c
	int sum(int k);

	int main() {
		int n = 5;
	  int result = sum(5);
	  printf("%d", result);
	  return 0;
	}

	int sum(int k) {
	  if (k > 0) {
	    return k + sum(k - 1);
	  } else {
	    return 0;
	  }
	} 

```
