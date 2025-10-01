#ifndef _CreateFileTree_h_
#define _CreateFileTree_h_
//$ class CreateFileTree
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export CreateFileTree : public ::java::lang::Object {
	$class(CreateFileTree, 0, ::java::lang::Object)
public:
	CreateFileTree();
	void init$();
	static ::java::nio::file::Path* create();
	static void main($StringArray* args);
	static bool supportsLinks(::java::nio::file::Path* dir);
	static ::java::util::Random* rand;
};

#endif // _CreateFileTree_h_