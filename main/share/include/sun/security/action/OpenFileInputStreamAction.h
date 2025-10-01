#ifndef _sun_security_action_OpenFileInputStreamAction_h_
#define _sun_security_action_OpenFileInputStreamAction_h_
//$ class sun.security.action.OpenFileInputStreamAction
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace security {
		namespace action {

class $import OpenFileInputStreamAction : public ::java::security::PrivilegedExceptionAction {
	$class(OpenFileInputStreamAction, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	OpenFileInputStreamAction();
	void init$(::java::io::File* file);
	void init$($String* filename);
	virtual $Object* run() override;
	::java::io::File* file = nullptr;
};

		} // action
	} // security
} // sun

#endif // _sun_security_action_OpenFileInputStreamAction_h_