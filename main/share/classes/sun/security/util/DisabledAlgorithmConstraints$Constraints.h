#ifndef _sun_security_util_DisabledAlgorithmConstraints$Constraints_h_
#define _sun_security_util_DisabledAlgorithmConstraints$Constraints_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$Constraints
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
		class List;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ConstraintsParameters;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DisabledAlgorithmConstraints$Constraints : public ::java::lang::Object {
	$class(DisabledAlgorithmConstraints$Constraints, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DisabledAlgorithmConstraints$Constraints();
	void init$($String* propertyName, ::java::util::List* constraintArray);
	::java::util::List* getConstraints($String* algorithm);
	virtual bool permits(::java::security::Key* key);
	virtual bool permits($String* algorithm, ::java::security::AlgorithmParameters* aps);
	virtual void permits($String* algorithm, ::sun::security::util::ConstraintsParameters* cp);
	::java::util::Map* constraintsMap = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$Constraints_h_