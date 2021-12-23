#pragma once
#include <stdio.h>

struct MyMsg {
	int a;
	char b;
};

int get_int(MyMsg* msg);
