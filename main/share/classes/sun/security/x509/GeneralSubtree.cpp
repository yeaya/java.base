#include <sun/security/x509/GeneralSubtree.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/GeneralName.h>
#include <jcpp.h>

#undef TAG_MAX
#undef TAG_MIN
#undef MIN_DEFAULT
#undef TAG_CONTEXT

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $GeneralName = ::sun::security::x509::GeneralName;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _GeneralSubtree_FieldInfo_[] = {
	{"TAG_MIN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtree, TAG_MIN)},
	{"TAG_MAX", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtree, TAG_MAX)},
	{"MIN_DEFAULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtree, MIN_DEFAULT)},
	{"name", "Lsun/security/x509/GeneralName;", nullptr, $PRIVATE, $field(GeneralSubtree, name)},
	{"minimum", "I", nullptr, $PRIVATE, $field(GeneralSubtree, minimum)},
	{"maximum", "I", nullptr, $PRIVATE, $field(GeneralSubtree, maximum)},
	{"myhash", "I", nullptr, $PRIVATE, $field(GeneralSubtree, myhash)},
	{}
};

$MethodInfo _GeneralSubtree_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/GeneralName;II)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSubtree::*)($GeneralName*,int32_t,int32_t)>(&GeneralSubtree::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSubtree::*)($DerValue*)>(&GeneralSubtree::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getName", "()Lsun/security/x509/GeneralName;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GeneralSubtree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.GeneralSubtree",
	"java.lang.Object",
	nullptr,
	_GeneralSubtree_FieldInfo_,
	_GeneralSubtree_MethodInfo_
};

$Object* allocate$GeneralSubtree($Class* clazz) {
	return $of($alloc(GeneralSubtree));
}

void GeneralSubtree::init$($GeneralName* name, int32_t min, int32_t max) {
	this->minimum = GeneralSubtree::MIN_DEFAULT;
	this->maximum = -1;
	this->myhash = -1;
	$set(this, name, name);
	this->minimum = min;
	this->maximum = max;
}

void GeneralSubtree::init$($DerValue* val) {
	this->minimum = GeneralSubtree::MIN_DEFAULT;
	this->maximum = -1;
	this->myhash = -1;
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for GeneralSubtree."_s);
	}
	$set(this, name, $new($GeneralName, $($nc($nc(val)->data$)->getDerValue()), true));
	while ($nc($nc(val)->data$)->available() != 0) {
		$var($DerValue, opt, $nc(val->data$)->getDerValue());
		bool var$0 = $nc(opt)->isContextSpecific(GeneralSubtree::TAG_MIN);
		if (var$0 && !opt->isConstructed()) {
			opt->resetTag($DerValue::tag_Integer);
			this->minimum = opt->getInteger();
		} else {
			bool var$2 = opt->isContextSpecific(GeneralSubtree::TAG_MAX);
			if (var$2 && !opt->isConstructed()) {
				opt->resetTag($DerValue::tag_Integer);
				this->maximum = opt->getInteger();
			} else {
				$throwNew($IOException, "Invalid encoding of GeneralSubtree."_s);
			}
		}
	}
}

$GeneralName* GeneralSubtree::getName() {
	return this->name;
}

int32_t GeneralSubtree::getMinimum() {
	return this->minimum;
}

int32_t GeneralSubtree::getMaximum() {
	return this->maximum;
}

$String* GeneralSubtree::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("\n   GeneralSubtree: ["_s)->append("\n    GeneralName: "_s);
	if (this->name != nullptr) {
		sb->append($of(this->name));
	}
	sb->append("\n    Minimum: "_s)->append(this->minimum)->append("\n    Maximum: "_s);
	if (this->maximum == -1) {
		sb->append("undefined"_s);
	} else {
		sb->append(this->maximum);
	}
	sb->append("    ]\n"_s);
	return sb->toString();
}

bool GeneralSubtree::equals(Object$* other) {
	if (!($instanceOf(GeneralSubtree, other))) {
		return false;
	}
	$var(GeneralSubtree, otherGS, $cast(GeneralSubtree, other));
	if (this->name == nullptr) {
		if ($nc(otherGS)->name != nullptr) {
			return false;
		}
	} else if (!($nc((this->name))->equals($nc(otherGS)->name))) {
		return false;
	}
	if (this->minimum != $nc(otherGS)->minimum) {
		return false;
	}
	if (this->maximum != $nc(otherGS)->maximum) {
		return false;
	}
	return true;
}

int32_t GeneralSubtree::hashCode() {
	if (this->myhash == -1) {
		this->myhash = 17;
		if (this->name != nullptr) {
			this->myhash = 37 * this->myhash + $nc(this->name)->hashCode();
		}
		if (this->minimum != GeneralSubtree::MIN_DEFAULT) {
			this->myhash = 37 * this->myhash + this->minimum;
		}
		if (this->maximum != -1) {
			this->myhash = 37 * this->myhash + this->maximum;
		}
	}
	return this->myhash;
}

void GeneralSubtree::encode($DerOutputStream* out) {
	$var($DerOutputStream, seq, $new($DerOutputStream));
	$nc(this->name)->encode(seq);
	if (this->minimum != GeneralSubtree::MIN_DEFAULT) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putInteger(this->minimum);
		seq->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, GeneralSubtree::TAG_MIN), tmp);
	}
	if (this->maximum != -1) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putInteger(this->maximum);
		seq->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, GeneralSubtree::TAG_MAX), tmp);
	}
	$nc(out)->write($DerValue::tag_Sequence, seq);
}

GeneralSubtree::GeneralSubtree() {
}

$Class* GeneralSubtree::load$($String* name, bool initialize) {
	$loadClass(GeneralSubtree, name, initialize, &_GeneralSubtree_ClassInfo_, allocate$GeneralSubtree);
	return class$;
}

$Class* GeneralSubtree::class$ = nullptr;

		} // x509
	} // security
} // sun