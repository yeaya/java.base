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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UserPrincipalNotFoundException, serialVersionUID)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UserPrincipalNotFoundException, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UserPrincipalNotFoundException, init$, void, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UserPrincipalNotFoundException, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.attribute.UserPrincipalNotFoundException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UserPrincipalNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserPrincipalNotFoundException);
	});
	return class$;
}

$Class* UserPrincipalNotFoundException::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java