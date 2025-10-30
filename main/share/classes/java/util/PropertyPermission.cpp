#include <java/util/PropertyPermission.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/PropertyPermissionCollection.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef ALL
#undef NONE
#undef PROPERTY_READ_ACTION
#undef PROPERTY_RW_ACTION
#undef PROPERTY_WRITE_ACTION
#undef READ
#undef WRITE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PropertyPermissionCollection = ::java::util::PropertyPermissionCollection;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace util {

$FieldInfo _PropertyPermission_FieldInfo_[] = {
	{"READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermission, READ)},
	{"WRITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermission, WRITE)},
	{"ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermission, ALL)},
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermission, NONE)},
	{"mask", "I", nullptr, $PRIVATE | $TRANSIENT, $field(PropertyPermission, mask)},
	{"actions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PropertyPermission, actions)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermission, serialVersionUID)},
	{}
};

$MethodInfo _PropertyPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyPermission::*)($String*,$String*)>(&PropertyPermission::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(PropertyPermission::*)($String*,int32_t)>(&PropertyPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&PropertyPermission::getActions))},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMask", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&PropertyPermission::getMask))},
	{"getMask", "()I", nullptr, 0, $method(static_cast<int32_t(PropertyPermission::*)()>(&PropertyPermission::getMask))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"init", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyPermission::*)(int32_t)>(&PropertyPermission::init))},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(PropertyPermission::*)($ObjectInputStream*)>(&PropertyPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(PropertyPermission::*)($ObjectOutputStream*)>(&PropertyPermission::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _PropertyPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.PropertyPermission",
	"java.security.BasicPermission",
	nullptr,
	_PropertyPermission_FieldInfo_,
	_PropertyPermission_MethodInfo_
};

$Object* allocate$PropertyPermission($Class* clazz) {
	return $of($alloc(PropertyPermission));
}

void PropertyPermission::init(int32_t mask) {
	if (((int32_t)(mask & (uint32_t)PropertyPermission::ALL)) != mask) {
		$throwNew($IllegalArgumentException, "invalid actions mask"_s);
	}
	if (mask == PropertyPermission::NONE) {
		$throwNew($IllegalArgumentException, "invalid actions mask"_s);
	}
	if (getName() == nullptr) {
		$throwNew($NullPointerException, "name can\'t be null"_s);
	}
	this->mask = mask;
}

void PropertyPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
	init(getMask(actions));
}

void PropertyPermission::init$($String* name, int32_t mask) {
	$BasicPermission::init$(name, $(getActions(mask)));
	this->mask = mask;
}

bool PropertyPermission::implies($Permission* p) {
	$var(PropertyPermission, that, nullptr);
	bool var$2 = $instanceOf(PropertyPermission, p);
	if (var$2) {
		$assign(that, $cast(PropertyPermission, p));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && (((int32_t)(this->mask & (uint32_t)$nc(that)->mask)) == that->mask);
	return var$0 && $BasicPermission::implies(that);
}

bool PropertyPermission::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	$var(PropertyPermission, that, nullptr);
	bool var$2 = $instanceOf(PropertyPermission, obj);
	if (var$2) {
		$assign(that, $cast(PropertyPermission, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && this->mask == $nc(that)->mask;
	return var$0 && $nc($(this->getName()))->equals($(that->getName()));
}

int32_t PropertyPermission::hashCode() {
	return $nc($(this->getName()))->hashCode();
}

int32_t PropertyPermission::getMask($String* actions) {
	$init(PropertyPermission);
	$useLocalCurrentObjectStackCache();
	int32_t mask = PropertyPermission::NONE;
	if (actions == nullptr) {
		return mask;
	}
	$init($SecurityConstants);
	if (actions == $SecurityConstants::PROPERTY_READ_ACTION) {
		return PropertyPermission::READ;
	}
	if (actions == $SecurityConstants::PROPERTY_WRITE_ACTION) {
		return PropertyPermission::WRITE;
	} else {
		if (actions == $SecurityConstants::PROPERTY_RW_ACTION) {
			return PropertyPermission::READ | PropertyPermission::WRITE;
		}
	}
	$var($chars, a, $nc(actions)->toCharArray());
	int32_t i = a->length - 1;
	if (i < 0) {
		return mask;
	}
	while (i != -1) {
		char16_t c = 0;
		while (true) {
			bool var$0 = (i != -1);
			if (var$0) {
				bool var$4 = (c = a->get(i)) == u' ';
				bool var$3 = var$4 || c == u'\r';
				bool var$2 = var$3 || c == u'\n';
				bool var$1 = var$2 || c == u'\f';
				var$0 = (var$1 || c == u'\t');
			}
			if (!(var$0)) {
				break;
			}
			{
				--i;
			}
		}
		int32_t matchlen = 0;
		if (i >= 3 && (a->get(i - 3) == u'r' || a->get(i - 3) == u'R') && (a->get(i - 2) == u'e' || a->get(i - 2) == u'E') && (a->get(i - 1) == u'a' || a->get(i - 1) == u'A') && (a->get(i) == u'd' || a->get(i) == u'D')) {
			matchlen = 4;
			mask |= PropertyPermission::READ;
		} else if (i >= 4 && (a->get(i - 4) == u'w' || a->get(i - 4) == u'W') && (a->get(i - 3) == u'r' || a->get(i - 3) == u'R') && (a->get(i - 2) == u'i' || a->get(i - 2) == u'I') && (a->get(i - 1) == u't' || a->get(i - 1) == u'T') && (a->get(i) == u'e' || a->get(i) == u'E')) {
			matchlen = 5;
			mask |= PropertyPermission::WRITE;
		} else {
			$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, actions}));
		}
		bool seencomma = false;
		while (i >= matchlen && !seencomma) {
			switch (a->get(i - matchlen)) {
			case u',':
				{
					seencomma = true;
					break;
				}
			case u' ':
				{}
			case u'\r':
				{}
			case u'\n':
				{}
			case u'\f':
				{}
			case u'\t':
				{
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, actions}));
				}
			}
			--i;
		}
		i -= matchlen;
	}
	return mask;
}

$String* PropertyPermission::getActions(int32_t mask) {
	$init(PropertyPermission);

	$var($String, var$0, nullptr)
	switch ((int32_t)(mask & (uint32_t)(PropertyPermission::READ | PropertyPermission::WRITE))) {
	case PropertyPermission::READ:
		{
			$init($SecurityConstants);
			$assign(var$0, $SecurityConstants::PROPERTY_READ_ACTION);
			break;
		}
	case PropertyPermission::WRITE:
		{
			$init($SecurityConstants);
			$assign(var$0, $SecurityConstants::PROPERTY_WRITE_ACTION);
			break;
		}
	case PropertyPermission::READ | PropertyPermission::WRITE:
		{
			$init($SecurityConstants);
			$assign(var$0, $SecurityConstants::PROPERTY_RW_ACTION);
			break;
		}
	default:
		{
			$assign(var$0, ""_s);
			break;
		}
	}
	return var$0;
}

$String* PropertyPermission::getActions() {
	if (this->actions == nullptr) {
		$set(this, actions, getActions(this->mask));
	}
	return this->actions;
}

int32_t PropertyPermission::getMask() {
	return this->mask;
}

$PermissionCollection* PropertyPermission::newPermissionCollection() {
	return $new($PropertyPermissionCollection);
}

void PropertyPermission::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		if (this->actions == nullptr) {
			getActions();
		}
		$nc(s)->defaultWriteObject();
	}
}

void PropertyPermission::readObject($ObjectInputStream* s) {
	$synchronized(this) {
		$nc(s)->defaultReadObject();
		init(getMask(this->actions));
	}
}

PropertyPermission::PropertyPermission() {
}

$Class* PropertyPermission::load$($String* name, bool initialize) {
	$loadClass(PropertyPermission, name, initialize, &_PropertyPermission_ClassInfo_, allocate$PropertyPermission);
	return class$;
}

$Class* PropertyPermission::class$ = nullptr;

	} // util
} // java