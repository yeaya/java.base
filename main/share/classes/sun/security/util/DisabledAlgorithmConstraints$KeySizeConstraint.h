#ifndef _sun_security_util_DisabledAlgorithmConstraints$KeySizeConstraint_h_
#define _sun_security_util_DisabledAlgorithmConstraints$KeySizeConstraint_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$KeySizeConstraint
//$ extends sun.security.util.DisabledAlgorithmConstraints$Constraint

#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>

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
			class DisabledAlgorithmConstraints$Constraint$Operator;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DisabledAlgorithmConstraints$KeySizeConstraint : public ::sun::security::util::DisabledAlgorithmConstraints$Constraint {
	$class(DisabledAlgorithmConstraints$KeySizeConstraint, $NO_CLASS_INIT, ::sun::security::util::DisabledAlgorithmConstraints$Constraint)
public:
	DisabledAlgorithmConstraints$KeySizeConstraint();
	void init$($String* algo, ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* operator$, int32_t length);
	virtual void permits(::sun::security::util::ConstraintsParameters* cp) override;
	virtual bool permits(::java::security::Key* key) override;
	virtual bool permits(::java::security::AlgorithmParameters* parameters) override;
	bool permitsImpl(::java::security::Key* key);
	int32_t minSize = 0;
	int32_t maxSize = 0;
	int32_t prohibitedSize = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$KeySizeConstraint_h_