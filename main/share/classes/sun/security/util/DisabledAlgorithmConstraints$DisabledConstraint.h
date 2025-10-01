#ifndef _sun_security_util_DisabledAlgorithmConstraints$DisabledConstraint_h_
#define _sun_security_util_DisabledAlgorithmConstraints$DisabledConstraint_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint
//$ extends sun.security.util.DisabledAlgorithmConstraints$Constraint

#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>

namespace java {
	namespace security {
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

class DisabledAlgorithmConstraints$DisabledConstraint : public ::sun::security::util::DisabledAlgorithmConstraints$Constraint {
	$class(DisabledAlgorithmConstraints$DisabledConstraint, $NO_CLASS_INIT, ::sun::security::util::DisabledAlgorithmConstraints$Constraint)
public:
	DisabledAlgorithmConstraints$DisabledConstraint();
	void init$($String* algo);
	using ::sun::security::util::DisabledAlgorithmConstraints$Constraint::permits;
	virtual void permits(::sun::security::util::ConstraintsParameters* cp) override;
	virtual bool permits(::java::security::Key* key) override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$DisabledConstraint_h_