//most of the decompilers show an 'operator new' in the main, so this might be compiled c++ this time
//we also see things that look like method calls

//tbh, I'm not used to write C++, this might look like a hybrid between C++, Java and other languages

class N { //the total size of the class might be 108? (because of new having a size of 108)
	int value; //angr seem to suggest that this class has 2 values, 1 of type int and one of type char*
	char[104] annotation; //the order of those values is unclear, because sometimes they are accessed by negative offset to the stack, and sometimes relative to each other with a positive offset

	N(int value) {
		this.value = value;
		//binary ninja and ghidra suggest that value is stored at offset 0x68 (104) in the class
	}

	char* setAnnotation(char *arg) { //ghidra prototypes this as: N::setAnnotation(N *this,char *param_1), and the memcpy is memcpy(this + 4,param_1,__n), this suggest that annotation is second in memory, after value
		return memcpy(this->annotation, arg, strlen(arg));
	}
};

int operator+(N const& lhs, N const& rhs) {
	return lhs.value + rhs.value;
}

int operator-(N const& lhs, N const& rhs) {
	return lhs.value - rhs.value;
}

int main() {
	N n1;
	N n2;

	if (argc <= 1)
		_exit(1);
	n1 = new N(5);
	n2 = new N(6);
	return n1.setAnnotation(argv[1]);
}