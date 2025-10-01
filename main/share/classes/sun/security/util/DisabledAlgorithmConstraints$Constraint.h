#ifndef _sun_security_util_DisabledAlgorithmConstraints$Constraint_h_
#define _sun_security_util_DisabledAlgorithmConstraints$Constraint_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$Constraint
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
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

class DisabledAlgorithmConstraints$Constraint : public ::java::lang::Object {
	$class(DisabledAlgorithmConstraints$Constraint, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DisabledAlgorithmConstraints$Constraint();
	void init$();
	virtual bool next(::sun::security::util::ConstraintsParameters* cp);
	virtual bool next(::java::security::Key* key);
	virtual bool permits(::java::security::Key* key);
	virtual bool permits(::java::security::AlgorithmParameters* parameters);
	virtual void permits(::sun::security::util::ConstraintsParameters* cp) {}
	$String* algorithm = nullptr;
	::sun::security::util::DisabledAlgorithmConstraints$Constraint* nextConstraint = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$Constraint_h_