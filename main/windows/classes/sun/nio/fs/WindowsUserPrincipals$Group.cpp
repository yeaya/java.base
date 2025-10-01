#include <sun/nio/fs/WindowsUserPrincipals$Group.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/Subject.h>
#include <sun/nio/fs/WindowsUserPrincipals$User.h>
#include <sun/nio/fs/WindowsUserPrincipals.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $Subject = ::javax::security::auth::Subject;
using $WindowsUserPrincipals = ::sun::nio::fs::WindowsUserPrincipals;
using $WindowsUserPrincipals$User = ::sun::nio::fs::WindowsUserPrincipals$User;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _WindowsUserPrincipals$Group_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*implies", "(Ljavax/security/auth/Subject;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsUserPrincipals$Group::*)($String*,int32_t,$String*)>(&WindowsUserPrincipals$Group::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsUserPrincipals$Group_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsUserPrincipals$Group", "sun.nio.fs.WindowsUserPrincipals", "Group", $STATIC},
	{"sun.nio.fs.WindowsUserPrincipals$User", "sun.nio.fs.WindowsUserPrincipals", "User", $STATIC},
	{}
};

$ClassInfo _WindowsUserPrincipals$Group_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsUserPrincipals$Group",
	"sun.nio.fs.WindowsUserPrincipals$User",
	"java.nio.file.attribute.GroupPrincipal",
	nullptr,
	_WindowsUserPrincipals$Group_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsUserPrincipals$Group_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsUserPrincipals"
};

$Object* allocate$WindowsUserPrincipals$Group($Class* clazz) {
	return $of($alloc(WindowsUserPrincipals$Group));
}

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
	$loadClass(WindowsUserPrincipals$Group, name, initialize, &_WindowsUserPrincipals$Group_ClassInfo_, allocate$WindowsUserPrincipals$Group);
	return class$;
}

$Class* WindowsUserPrincipals$Group::class$ = nullptr;

		} // fs
	} // nio
} // sun