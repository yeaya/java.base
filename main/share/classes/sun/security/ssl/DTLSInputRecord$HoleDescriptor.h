#ifndef _sun_security_ssl_DTLSInputRecord$HoleDescriptor_h_
#define _sun_security_ssl_DTLSInputRecord$HoleDescriptor_h_
//$ class sun.security.ssl.DTLSInputRecord$HoleDescriptor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {

class DTLSInputRecord$HoleDescriptor : public ::java::lang::Object {
	$class(DTLSInputRecord$HoleDescriptor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTLSInputRecord$HoleDescriptor();
	void init$(int32_t offset, int32_t limit);
	int32_t offset = 0;
	int32_t limit = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSInputRecord$HoleDescriptor_h_