#ifndef _sun_security_pkcs_ParsingException_h_
#define _sun_security_pkcs_ParsingException_h_
//$ class sun.security.pkcs.ParsingException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace security {
		namespace pkcs {

class $export ParsingException : public ::java::io::IOException {
	$class(ParsingException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ParsingException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xa8570920151a5005;
	ParsingException(const ParsingException& e);
	virtual void throw$() override;
	inline ParsingException* operator ->() const {
		return (ParsingException*)throwing$;
	}
	inline operator ParsingException*() const {
		return (ParsingException*)throwing$;
	}
};

		} // pkcs
	} // security
} // sun

#endif // _sun_security_pkcs_ParsingException_h_