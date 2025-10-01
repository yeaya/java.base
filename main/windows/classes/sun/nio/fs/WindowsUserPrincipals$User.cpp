#include <sun/nio/fs/WindowsUserPrincipals$User.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/fs/WindowsUserPrincipals.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $WindowsUserPrincipals = ::sun::nio::fs::WindowsUserPrincipals;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsUserPrincipals$User_FieldInfo_[] = {
	{"sidString", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsUserPrincipals$User, sidString$)},
	{"sidType", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsUserPrincipals$User, sidType)},
	{"accountName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsUserPrincipals$User, accountName)},
	{}
};

$MethodInfo _WindowsUserPrincipals$User_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsUserPrincipals$User::*)($String*,int32_t,$String*)>(&WindowsUserPrincipals$User::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"sidString", "()Ljava/lang/String;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsUserPrincipals$User_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsUserPrincipals$User", "sun.nio.fs.WindowsUserPrincipals", "User", $STATIC},
	{}
};

$ClassInfo _WindowsUserPrincipals$User_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsUserPrincipals$User",
	"java.lang.Object",
	"java.nio.file.attribute.UserPrincipal",
	_WindowsUserPrincipals$User_FieldInfo_,
	_WindowsUserPrincipals$User_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsUserPrincipals$User_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsUserPrincipals"
};

$Object* allocate$WindowsUserPrincipals$User($Class* clazz) {
	return $of($alloc(WindowsUserPrincipals$User));
}

void WindowsUserPrincipals$User::init$($String* sidString, int32_t sidType, $String* accountName) {
	$set(this, sidString$, sidString);
	this->sidType = sidType;
	$set(this, accountName, accountName);
}

$String* WindowsUserPrincipals$User::sidString() {
	return this->sidString$;
}

$String* WindowsUserPrincipals$User::getName() {
	return this->accountName;
}

$String* WindowsUserPrincipals$User::toString() {
	$var($String, type, nullptr);
	switch (this->sidType) {
	case 1:
		{
			$assign(type, "User"_s);
			break;
		}
	case 2:
		{
			$assign(type, "Group"_s);
			break;
		}
	case 3:
		{
			$assign(type, "Domain"_s);
			break;
		}
	case 4:
		{
			$assign(type, "Alias"_s);
			break;
		}
	case 5:
		{
			$assign(type, "Well-known group"_s);
			break;
		}
	case 6:
		{
			$assign(type, "Deleted"_s);
			break;
		}
	case 7:
		{
			$assign(type, "Invalid"_s);
			break;
		}
	case 9:
		{
			$assign(type, "Computer"_s);
			break;
		}
	default:
		{
			$assign(type, "Unknown"_s);
		}
	}
	return $str({this->accountName, " ("_s, type, ")"_s});
}

bool WindowsUserPrincipals$User::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(WindowsUserPrincipals$User, obj))) {
		return false;
	}
	$var(WindowsUserPrincipals$User, other, $cast(WindowsUserPrincipals$User, obj));
	return $nc(this->sidString$)->equals($nc(other)->sidString$);
}

int32_t WindowsUserPrincipals$User::hashCode() {
	return $nc(this->sidString$)->hashCode();
}

WindowsUserPrincipals$User::WindowsUserPrincipals$User() {
}

$Class* WindowsUserPrincipals$User::load$($String* name, bool initialize) {
	$loadClass(WindowsUserPrincipals$User, name, initialize, &_WindowsUserPrincipals$User_ClassInfo_, allocate$WindowsUserPrincipals$User);
	return class$;
}

$Class* WindowsUserPrincipals$User::class$ = nullptr;

		} // fs
	} // nio
} // sun