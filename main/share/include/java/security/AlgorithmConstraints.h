#ifndef _java_security_AlgorithmConstraints_h_
#define _java_security_AlgorithmConstraints_h_
//$ interface java.security.AlgorithmConstraints
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace security {

class $import AlgorithmConstraints : public ::java::lang::Object {
	$interface(AlgorithmConstraints, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::AlgorithmParameters* parameters) {return false;}
	virtual bool permits(::java::util::Set* primitives, ::java::security::Key* key) {return false;}
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::Key* key, ::java::security::AlgorithmParameters* parameters) {return false;}
};

	} // security
} // java

#endif // _java_security_AlgorithmConstraints_h_