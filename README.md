# simple-linux-kernel-module

## An example of a linux kernel module

We will create a simple C program as below with name is helloworld.c. When loading into the kernel, it will generate the message "Hello world". When unloading the kernel module, the "Bye bye"message will be generated.

## Compiling linux kernel module
In order to compile a linux kernel module, we will create a make file as below:

obj-m += helloworld.o 
all: make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 
clean: make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

## Loading and unloading a linux kernel module
Now we can insert the module to test it. To do this, run:
sudo insmod helloworld.ko 
To remove the module, run:
sudo rmmod helloworld

## Conclusion
I hope you’ve enjoyed our romp through kernel land. Though the examples I’ve provided are basic, you can use this structure to construct your own module that does very complex tasks.
You can check detail at here: http://sandan.live/index.php/2018/08/20/how-to-make-a-simple-kernel-module/
