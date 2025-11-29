#include <sun/nio/fs/UnixUserPrincipals$Group.h>

#include <javax/security/auth/Subject.h>
#include <sun/nio/fs/UnixUserPrincipals$User.h>
#include <sun/nio/fs/UnixUserPrincipals.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;
using $UnixUserPrincipals$User = ::sun::nio::fs::UnixUserPrincipals$User;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _UnixUserPrincipals$Group_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*implies", "(Ljavax/security/auth/Subject;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(UnixUserPrincipals$Group::*)(int32_t,$String*)>(&UnixUserPrincipals$Group::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnixUserPrincipals$Group_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixUserPrincipals$Group", "sun.nio.fs.UnixUserPrincipals", "Group", $STATIC},
	{"sun.nio.fs.UnixUserPrincipals$User", "sun.nio.fs.UnixUserPrincipals", "User", $STATIC},
	{}
};

$ClassInfo _UnixUserPrincipals$Group_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixUserPrincipals$Group",
	"sun.nio.fs.UnixUserPrincipals$User",
	"java.nio.file.attribute.GroupPrincipal",
	nullptr,
	_UnixUserPrincipals$Group_MethodInfo_,
	nullptr,
	nullptr,
	_UnixUserPrincipals$Group_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixUserPrincipals"
};

$Object* allocate$UnixUserPrincipals$Group($Class* clazz) {
	return $of($alloc(UnixUserPrincipals$Group));
}

$String* UnixUserPrincipals$Group::getName() {
	 return this->$UnixUserPrincipals$User::getName();
}

$String* UnixUserPrincipals$Group::toString() {
	 return this->$UnixUserPrincipals$User::toString();
}

bool UnixUserPrincipals$Group::equals(Object$* obj) {
	 return this->$UnixUserPrincipals$User::equals(obj);
}

int32_t UnixUserPrincipals$Group::hashCode() {
	 return this->$UnixUserPrincipals$User::hashCode();
}

bool UnixUserPrincipals$Group::implies($Subject* subject) {
	 return this->$UnixUserPrincipals$User::implies(subject);
}

$Object* UnixUserPrincipals$Group::clone() {
	 return this->$UnixUserPrincipals$User::clone();
}

void UnixUserPrincipals$Group::finalize() {
	this->$UnixUserPrincipals$User::finalize();
}

void UnixUserPrincipals$Group::init$(int32_t id, $String* name) {
	$UnixUserPrincipals$User::init$(id, true, name);
}

UnixUserPrincipals$Group::UnixUserPrincipals$Group() {
}

$Class* UnixUserPrincipals$Group::load$($String* name, bool initialize) {
	$loadClass(UnixUserPrincipals$Group, name, initialize, &_UnixUserPrincipals$Group_ClassInfo_, allocate$UnixUserPrincipals$Group);
	return class$;
}

$Class* UnixUserPrincipals$Group::class$ = nullptr;

		} // fs
	} // nio
} // sun