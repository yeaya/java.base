#ifndef _sun_security_util_JarConstraintsParameters_h_
#define _sun_security_util_JarConstraintsParameters_h_
//$ class sun.security.util.JarConstraintsParameters
//$ extends sun.security.util.ConstraintsParameters

#include <java/lang/Array.h>
#include <sun/security/util/ConstraintsParameters.h>

namespace java {
	namespace security {
		class CodeSigner;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import JarConstraintsParameters : public ::sun::security::util::ConstraintsParameters {
	$class(JarConstraintsParameters, $NO_CLASS_INIT, ::sun::security::util::ConstraintsParameters)
public:
	JarConstraintsParameters();
	void init$($Array<::java::security::CodeSigner>* signers);
	virtual bool anchorIsJdkCA() override;
	virtual $String* extendedExceptionMsg() override;
	virtual ::java::util::Date* getDate() override;
	virtual ::java::util::Set* getKeys() override;
	virtual $String* getVariant() override;
	void init(::java::security::cert::CertPath* cp);
	virtual void setExtendedExceptionMsg($String* file, $String* target);
	virtual $String* toString() override;
	bool anchorIsJdkCA$ = false;
	bool anchorIsJdkCASet = false;
	::java::util::Date* timestamp = nullptr;
	::java::util::Set* keys = nullptr;
	::java::util::Set* certsIssuedByAnchor = nullptr;
	$String* message = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_JarConstraintsParameters_h_