#include <sun/nio/fs/UnixUserPrincipals$User.h>

#include <java/lang/AssertionError.h>
#include <sun/nio/fs/UnixUserPrincipals.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $UnixUserPrincipals = ::sun::nio::fs::UnixUserPrincipals;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixUserPrincipals$User_FieldInfo_[] = {
	{"id", "I", nullptr, $PRIVATE | $FINAL, $field(UnixUserPrincipals$User, id)},
	{"isGroup", "Z", nullptr, $PRIVATE | $FINAL, $field(UnixUserPrincipals$User, isGroup)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(UnixUserPrincipals$User, name)},
	{}
};

$MethodInfo _UnixUserPrincipals$User_MethodInfo_[] = {
	{"<init>", "(IZLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(UnixUserPrincipals$User::*)(int32_t,bool,$String*)>(&UnixUserPrincipals$User::init$))},
	{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(UnixUserPrincipals$User::*)(int32_t,$String*)>(&UnixUserPrincipals$User::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"gid", "()I", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uid", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _UnixUserPrincipals$User_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixUserPrincipals$User", "sun.nio.fs.UnixUserPrincipals", "User", $STATIC},
	{}
};

$ClassInfo _UnixUserPrincipals$User_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixUserPrincipals$User",
	"java.lang.Object",
	"java.nio.file.attribute.UserPrincipal",
	_UnixUserPrincipals$User_FieldInfo_,
	_UnixUserPrincipals$User_MethodInfo_,
	nullptr,
	nullptr,
	_UnixUserPrincipals$User_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixUserPrincipals"
};

$Object* allocate$UnixUserPrincipals$User($Class* clazz) {
	return $of($alloc(UnixUserPrincipals$User));
}

void UnixUserPrincipals$User::init$(int32_t id, bool isGroup, $String* name) {
	this->id = id;
	this->isGroup = isGroup;
	$set(this, name, name);
}

void UnixUserPrincipals$User::init$(int32_t id, $String* name) {
	UnixUserPrincipals$User::init$(id, false, name);
}

int32_t UnixUserPrincipals$User::uid() {
	if (this->isGroup) {
		$throwNew($AssertionError);
	}
	return this->id;
}

int32_t UnixUserPrincipals$User::gid() {
	if (this->isGroup) {
		return this->id;
	}
	$throwNew($AssertionError);
}

$String* UnixUserPrincipals$User::getName() {
	return this->name;
}

$String* UnixUserPrincipals$User::toString() {
	return this->name;
}

bool UnixUserPrincipals$User::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(UnixUserPrincipals$User, obj))) {
		return false;
	}
	$var(UnixUserPrincipals$User, other, $cast(UnixUserPrincipals$User, obj));
	if ((this->id != $nc(other)->id) || (this->isGroup != $nc(other)->isGroup)) {
		return false;
	}
	if (this->id == -1 && $nc(other)->id == -1) {
		return $nc(this->name)->equals(other->name);
	}
	return true;
}

int32_t UnixUserPrincipals$User::hashCode() {
	return (this->id != -1) ? this->id : $nc(this->name)->hashCode();
}

UnixUserPrincipals$User::UnixUserPrincipals$User() {
}

$Class* UnixUserPrincipals$User::load$($String* name, bool initialize) {
	$loadClass(UnixUserPrincipals$User, name, initialize, &_UnixUserPrincipals$User_ClassInfo_, allocate$UnixUserPrincipals$User);
	return class$;
}

$Class* UnixUserPrincipals$User::class$ = nullptr;

		} // fs
	} // nio
} // sun