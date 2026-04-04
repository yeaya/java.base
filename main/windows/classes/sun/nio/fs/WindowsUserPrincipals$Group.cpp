#include <sun/nio/fs/WindowsUserPrincipals$Group.h>
#include <javax/security/auth/Subject.h>
#include <sun/nio/fs/WindowsUserPrincipals$User.h>
#include <sun/nio/fs/WindowsUserPrincipals.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;
using $WindowsUserPrincipals$User = ::sun::nio::fs::WindowsUserPrincipals$User;

namespace sun {
	namespace nio {
		namespace fs {

$String* WindowsUserPrincipals$Group::getName() {
	 return this->$WindowsUserPrincipals$User::getName();
}

$String* WindowsUserPrincipals$Group::toString() {
	 return this->$WindowsUserPrincipals$User::toString();
}

bool WindowsUserPrincipals$Group::equals(Object$* obj) {
	 return this->$WindowsUserPrincipals$User::equals(obj);
}

int32_t WindowsUserPrincipals$Group::hashCode() {
	 return this->$WindowsUserPrincipals$User::hashCode();
}

bool WindowsUserPrincipals$Group::implies($Subject* subject) {
	 return this->$WindowsUserPrincipals$User::implies(subject);
}

$Object* WindowsUserPrincipals$Group::clone() {
	 return this->$WindowsUserPrincipals$User::clone();
}

void WindowsUserPrincipals$Group::finalize() {
	this->$WindowsUserPrincipals$User::finalize();
}

void WindowsUserPrincipals$Group::init$($String* sidString, int32_t sidType, $String* accountName) {
	$WindowsUserPrincipals$User::init$(sidString, sidType, accountName);
}

WindowsUserPrincipals$Group::WindowsUserPrincipals$Group() {
}

$Class* WindowsUserPrincipals$Group::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"*implies", "(Ljavax/security/auth/Subject;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0, $method(WindowsUserPrincipals$Group, init$, void, $String*, int32_t, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsUserPrincipals$Group", "sun.nio.fs.WindowsUserPrincipals", "Group", $STATIC},
		{"sun.nio.fs.WindowsUserPrincipals$User", "sun.nio.fs.WindowsUserPrincipals", "User", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsUserPrincipals$Group",
		"sun.nio.fs.WindowsUserPrincipals$User",
		"java.nio.file.attribute.GroupPrincipal",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsUserPrincipals"
	};
	$loadClass(WindowsUserPrincipals$Group, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsUserPrincipals$Group));
	});
	return class$;
}

$Class* WindowsUserPrincipals$Group::class$ = nullptr;

		} // fs
	} // nio
} // sun