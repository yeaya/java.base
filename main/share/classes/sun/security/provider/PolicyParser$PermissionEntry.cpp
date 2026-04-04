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
		retval ^= this->name->hashCode();
	}
	if (this->action != nullptr) {
		retval ^= this->action->hashCode();
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
	} else if (!this->permission->equals($nc(that)->permission)) {
		return false;
	}
	if (this->name == nullptr) {
		if ($nc(that)->name != nullptr) {
			return false;
		}
	} else if (!this->name->equals($nc(that)->name)) {
		return false;
	}
	if (this->action == nullptr) {
		if ($nc(that)->action != nullptr) {
			return false;
		}
	} else if (!this->action->equals($nc(that)->action)) {
		return false;
	}
	if (this->signedBy == nullptr) {
		if ($nc(that)->signedBy != nullptr) {
			return false;
		}
	} else if (!this->signedBy->equals($nc(that)->signedBy)) {
		return false;
	}
	return true;
}

void PolicyParser$PermissionEntry::write($PrintWriter* out) {
	$useLocalObjectStack();
	$nc(out)->print("permission "_s);
	out->print(this->permission);
	if (this->name != nullptr) {
		out->print(" \""_s);
		out->print($($(this->name->replaceAll("\\\\"_s, "\\\\\\\\"_s))->replaceAll("\\\""_s, "\\\\\\\""_s)));
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
	$FieldInfo fieldInfos$$[] = {
		{"permission", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, permission)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, name)},
		{"action", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, action)},
		{"signedBy", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$PermissionEntry, signedBy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PolicyParser$PermissionEntry, init$, void)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PolicyParser$PermissionEntry, init$, void, $String*, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PermissionEntry, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PermissionEntry, hashCode, int32_t)},
		{"write", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $virtualMethod(PolicyParser$PermissionEntry, write, void, $PrintWriter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyParser$PermissionEntry", "sun.security.provider.PolicyParser", "PermissionEntry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.provider.PolicyParser$PermissionEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyParser"
	};
	$loadClass(PolicyParser$PermissionEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyParser$PermissionEntry);
	});
	return class$;
}

$Class* PolicyParser$PermissionEntry::class$ = nullptr;

		} // provider
	} // security
} // sun