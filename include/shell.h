#ifndef SHELL_H
#define SHELL_H

#include "string.h"
#include "util.h"
#include "screen.h"
#include "kb.h"

void launch_shell(int n);

void sum();

void fill_array(int arr[], int n);

void print_array(int arr[], int n);

int sum_array(int arr[], int n);

void echo();

void sort();

void insertion_sort(int arr[], int n, int order);

void fibonacci();

int fibo(int n);

void set_bg_color();

void help();

#endif
