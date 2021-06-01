#include<memory>
#include<cassert>

int main(int argc, char* argv[]){
	std::unique_ptr<int> p_x(new int);
	*p_x;
	int* p_x = p_x.get();

	std::unique_ptr<int> p_z;
	p_z = std::move(p_x);
	assert(p_z);
	assert(!p_x);
	p_z.reset();
	assert(!p_z);

	return 0;
}
