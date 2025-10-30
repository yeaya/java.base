#ifndef _java_nio_file_attribute_UserPrincipalNotFoundException_h_
#define _java_nio_file_attribute_UserPrincipalNotFoundException_h_
//$ class java.nio.file.attribute.UserPrincipalNotFoundException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import UserPrincipalNotFoundException : public ::java::io::IOException {
	$class(UserPrincipalNotFoundException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	UserPrincipalNotFoundException();
	void init$($String* name);
	virtual $String* getName();
	static const int64_t serialVersionUID = (int64_t)0xB57C78C02731FAC0;
	$String* name = nullptr;
	UserPrincipalNotFoundException(const UserPrincipalNotFoundException& e);
	virtual void throw$() override;
	inline UserPrincipalNotFoundException* operator ->() {
		return (UserPrincipalNotFoundException*)throwing$;
	}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_UserPrincipalNotFoundException_h_