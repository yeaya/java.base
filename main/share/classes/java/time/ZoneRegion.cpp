#include <java/time/ZoneRegion.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/Ser.h>
#include <java/time/ZoneId.h>
#include <java/time/zone/ZoneRules.h>
#include <java/time/zone/ZoneRulesException.h>
#include <java/time/zone/ZoneRulesProvider.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ZONE_REGION_TYPE

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DateTimeException = ::java::time::DateTimeException;
using $Ser = ::java::time::Ser;
using $ZoneId = ::java::time::ZoneId;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $ZoneRulesException = ::java::time::zone::ZoneRulesException;
using $ZoneRulesProvider = ::java::time::zone::ZoneRulesProvider;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {

$FieldInfo _ZoneRegion_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneRegion, serialVersionUID)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ZoneRegion, id)},
	{"rules", "Ljava/time/zone/ZoneRules;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(ZoneRegion, rules)},
	{}
};

$MethodInfo _ZoneRegion_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/time/zone/ZoneRules;)V", nullptr, 0, $method(static_cast<void(ZoneRegion::*)($String*,$ZoneRules*)>(&ZoneRegion::init$))},
	{"checkName", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ZoneRegion::checkName))},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRules", "()Ljava/time/zone/ZoneRules;", nullptr, $PUBLIC},
	{"ofId", "(Ljava/lang/String;Z)Ljava/time/ZoneRegion;", nullptr, $STATIC, $method(static_cast<ZoneRegion*(*)($String*,bool)>(&ZoneRegion::ofId))},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/ZoneId;", nullptr, $STATIC, $method(static_cast<$ZoneId*(*)($DataInput*)>(&ZoneRegion::readExternal)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ZoneRegion::*)($ObjectInputStream*)>(&ZoneRegion::readObject)), "java.io.InvalidObjectException"},
	{"write", "(Ljava/io/DataOutput;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(static_cast<void(ZoneRegion::*)($DataOutput*)>(&ZoneRegion::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ZoneRegion::*)()>(&ZoneRegion::writeReplace))},
	{}
};

$ClassInfo _ZoneRegion_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.ZoneRegion",
	"java.time.ZoneId",
	nullptr,
	_ZoneRegion_FieldInfo_,
	_ZoneRegion_MethodInfo_
};

$Object* allocate$ZoneRegion($Class* clazz) {
	return $of($alloc(ZoneRegion));
}

ZoneRegion* ZoneRegion::ofId($String* zoneId, bool checkAvailable) {
	$init(ZoneRegion);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(zoneId), "zoneId"_s);
	checkName(zoneId);
	$var($ZoneRules, rules, nullptr);
	try {
		$assign(rules, $ZoneRulesProvider::getRules(zoneId, true));
	} catch ($ZoneRulesException&) {
		$var($ZoneRulesException, ex, $catch());
		if (checkAvailable) {
			$throw(ex);
		}
	}
	return $new(ZoneRegion, zoneId, rules);
}

void ZoneRegion::checkName($String* zoneId) {
	$init(ZoneRegion);
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(zoneId)->length();
	if (n < 2) {
		$throwNew($DateTimeException, $$str({"Invalid ID for region-based ZoneId, invalid format: "_s, zoneId}));
	}
	for (int32_t i = 0; i < n; ++i) {
		char16_t c = zoneId->charAt(i);
		if (c >= u'a' && c <= u'z') {
			continue;
		}
		if (c >= u'A' && c <= u'Z') {
			continue;
		}
		if (c == u'/' && i != 0) {
			continue;
		}
		if (c >= u'0' && c <= u'9' && i != 0) {
			continue;
		}
		if (c == u'~' && i != 0) {
			continue;
		}
		if (c == u'.' && i != 0) {
			continue;
		}
		if (c == u'_' && i != 0) {
			continue;
		}
		if (c == u'+' && i != 0) {
			continue;
		}
		if (c == u'-' && i != 0) {
			continue;
		}
		$throwNew($DateTimeException, $$str({"Invalid ID for region-based ZoneId, invalid format: "_s, zoneId}));
	}
}

void ZoneRegion::init$($String* id, $ZoneRules* rules) {
	$ZoneId::init$();
	$set(this, id, id);
	$set(this, rules, rules);
}

$String* ZoneRegion::getId() {
	return this->id;
}

$ZoneRules* ZoneRegion::getRules() {
	return (this->rules != nullptr ? this->rules : $ZoneRulesProvider::getRules(this->id, false));
}

$Object* ZoneRegion::writeReplace() {
	return $of($new($Ser, $Ser::ZONE_REGION_TYPE, this));
}

void ZoneRegion::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void ZoneRegion::write($DataOutput* out) {
	$nc(out)->writeByte($Ser::ZONE_REGION_TYPE);
	writeExternal(out);
}

void ZoneRegion::writeExternal($DataOutput* out) {
	$nc(out)->writeUTF(this->id);
}

$ZoneId* ZoneRegion::readExternal($DataInput* in) {
	$init(ZoneRegion);
	$var($String, id, $nc(in)->readUTF());
	return $ZoneId::of(id, false);
}

ZoneRegion::ZoneRegion() {
}

$Class* ZoneRegion::load$($String* name, bool initialize) {
	$loadClass(ZoneRegion, name, initialize, &_ZoneRegion_ClassInfo_, allocate$ZoneRegion);
	return class$;
}

$Class* ZoneRegion::class$ = nullptr;

	} // time
} // java