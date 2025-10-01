#ifndef _sun_security_util_AbstractAlgorithmConstraints_h_
#define _sun_security_util_AbstractAlgorithmConstraints_h_
//$ class sun.security.util.AbstractAlgorithmConstraints
//$ extends java.security.AlgorithmConstraints

#include <java/security/AlgorithmConstraints.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class AlgorithmDecomposer;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import AbstractAlgorithmConstraints : public ::java::security::AlgorithmConstraints {
	$class(AbstractAlgorithmConstraints, $NO_CLASS_INIT, ::java::security::AlgorithmConstraints)
public:
	AbstractAlgorithmConstraints();
	void init$(::sun::security::util::AlgorithmDecomposer* decomposer);
	static bool checkAlgorithm(::java::util::List* algorithms, $String* algorithm, ::sun::security::util::AlgorithmDecomposer* decomposer);
	static ::java::util::List* getAlgorithms($String* propertyName);
	::sun::security::util::AlgorithmDecomposer* decomposer = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_AbstractAlgorithmConstraints_h_