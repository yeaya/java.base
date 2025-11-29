#include <sun/security/provider/PolicyParser$PermissionEntry.h>

#include <java/io/PrintWriter.h>
#include <sun/security/provider/PolicyParser.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyParser$PermissionEntry_FieldInfo_[] = {
	{"permission", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, permission)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, name)},
	{"action", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, action)},
	{"signedBy", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, signedBy)},
	{}
};

$MethodInfo _PolicyParser$PermissionEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$PermissionEntry::*)()>(&PolicyParser$PermissionEntry::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$PermissionEntry::*)($String*,$String*,$String*)>(&PolicyParser$PermissionEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"write", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PolicyParser$PermissionEntry_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyParser$PermissionEntry", "sun.security.provider.PolicyParser", "PermissionEntry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PolicyParser$PermissionEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.PolicyParser$PermissionEntry",
	"java.lang.Object",
	nullptr,
	_PolicyParser$PermissionEntry_FieldInfo_,
	_PolicyParser$PermissionEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PolicyParser$PermissionEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyParser"
};

$Object* allocate$PolicyParser$PermissionEntry($Class* clazz) {
	return $of($alloc(PolicyParser$PermissionEntry));
}

void PolicyParser$PermissionEntry::init$() {
}

void PolicyParser$PermissionEntry::init$($String* permission, $String* name, $String* action) {
	$set(this, permission, permission);
	$set(this, name, name);
	$set(this, action, action);
}

int32_t PolicyParser$PermissionEntry::hashCode() {
	int32_t retval = $nc(this->permission)->hashCode();
	if (this->name != nullptr) {
		retval ^= $nc(this->name)->hashCode();
	}
	if (this->action != nullptr) {
		retval ^= $nc(this->action)->hashCode();
	}
	return retval;
}

bool PolicyParser$PermissionEntry::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(PolicyParser$PermissionEntry, obj))) {
		return false;
	}
	$var(PolicyParser$PermissionEntry, that, $cast(PolicyParser$PermissionEntry, obj));
	if (this->permission == nullptr) {
		if ($nc(that)->permission != nullptr) {
			return false;
		}
	} else if (!$nc(this->permission)->equals($nc(that)->permission)) {
		return false;
	}
	if (this->name == nullptr) {
		if ($nc(that)->name != nullptr) {
			return false;
		}
	} else if (!$nc(this->name)->equals($nc(that)->name)) {
		return false;
	}
	if (this->action == nullptr) {
		if ($nc(that)->action != nullptr) {
			return false;
		}
	} else if (!$nc(this->action)->equals($nc(that)->action)) {
		return false;
	}
	if (this->signedBy == nullptr) {
		if ($nc(that)->signedBy != nullptr) {
			return false;
		}
	} else if (!$nc(this->signedBy)->equals($nc(that)->signedBy)) {
		return false;
	}
	return true;
}

void PolicyParser$PermissionEntry::write($PrintWriter* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->print("permission "_s);
	out->print(this->permission);
	if (this->name != nullptr) {
		out->print(" \""_s);
		out->print($($($nc(this->name)->replaceAll("\\\\"_s, "\\\\\\\\"_s))->replaceAll("\\\""_s, "\\\\\\\""_s)));
		out->print(u'\"');
	}
	if (this->action != nullptr) {
		out->print(", \""_s);
		out->print(this->action);
		out->print(u'\"');
	}
	if (this->signedBy != nullptr) {
		out->print(", signedBy \""_s);
		out->print(this->signedBy);
		out->print(u'\"');
	}
	out->println(";"_s);
}

PolicyParser$PermissionEntry::PolicyParser$PermissionEntry() {
}

$Class* PolicyParser$PermissionEntry::load$($String* name, bool initialize) {
	$loadClass(PolicyParser$PermissionEntry, name, initialize, &_PolicyParser$PermissionEntry_ClassInfo_, allocate$PolicyParser$PermissionEntry);
	return class$;
}

$Class* PolicyParser$PermissionEntry::class$ = nullptr;

		} // provider
	} // security
} // sun