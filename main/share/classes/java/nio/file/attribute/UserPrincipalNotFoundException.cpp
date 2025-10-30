#include <java/nio/file/attribute/UserPrincipalNotFoundException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _UserPrincipalNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UserPrincipalNotFoundException, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UserPrincipalNotFoundException, name)},
	{}
};

$MethodInfo _UserPrincipalNotFoundException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UserPrincipalNotFoundException::*)($String*)>(&UserPrincipalNotFoundException::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UserPrincipalNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.attribute.UserPrincipalNotFoundException",
	"java.io.IOException",
	nullptr,
	_UserPrincipalNotFoundException_FieldInfo_,
	_UserPrincipalNotFoundException_MethodInfo_
};

$Object* allocate$UserPrincipalNotFoundException($Class* clazz) {
	return $of($alloc(UserPrincipalNotFoundException));
}

void UserPrincipalNotFoundException::init$($String* name) {
	$IOException::init$();
	$set(this, name, name);
}

$String* UserPrincipalNotFoundException::getName() {
	return this->name;
}

UserPrincipalNotFoundException::UserPrincipalNotFoundException() {
}

UserPrincipalNotFoundException::UserPrincipalNotFoundException(const UserPrincipalNotFoundException& e) : $IOException(e) {
}

void UserPrincipalNotFoundException::throw$() {
	throw *this;
}

$Class* UserPrincipalNotFoundException::load$($String* name, bool initialize) {
	$loadClass(UserPrincipalNotFoundException, name, initialize, &_UserPrincipalNotFoundException_ClassInfo_, allocate$UserPrincipalNotFoundException);
	return class$;
}

$Class* UserPrincipalNotFoundException::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java