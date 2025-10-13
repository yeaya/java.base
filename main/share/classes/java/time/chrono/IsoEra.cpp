#include <java/time/chrono/IsoEra.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <jcpp.h>

#undef BCE
#undef CE

using $IsoEraArray = $Array<::java::time::chrono::IsoEra>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $Era = ::java::time::chrono::Era;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _IsoEra_FieldInfo_[] = {
	{"BCE", "Ljava/time/chrono/IsoEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoEra, BCE)},
	{"CE", "Ljava/time/chrono/IsoEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoEra, CE)},
	{"$VALUES", "[Ljava/time/chrono/IsoEra;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(IsoEra, $VALUES)},
	{}
};

$MethodInfo _IsoEra_MethodInfo_[] = {
	{"$values", "()[Ljava/time/chrono/IsoEra;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$IsoEraArray*(*)()>(&IsoEra::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(IsoEra::*)($String*,int32_t)>(&IsoEra::init$))},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"of", "(I)Ljava/time/chrono/IsoEra;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IsoEra*(*)(int32_t)>(&IsoEra::of))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/chrono/IsoEra;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IsoEra*(*)($String*)>(&IsoEra::valueOf))},
	{"values", "()[Ljava/time/chrono/IsoEra;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IsoEraArray*(*)()>(&IsoEra::values))},
	{}
};

$ClassInfo _IsoEra_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.chrono.IsoEra",
	"java.lang.Enum",
	"java.time.chrono.Era",
	_IsoEra_FieldInfo_,
	_IsoEra_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/chrono/IsoEra;>;Ljava/time/chrono/Era;"
};

$Object* allocate$IsoEra($Class* clazz) {
	return $of($alloc(IsoEra));
}

$String* IsoEra::toString() {
	 return this->$Enum::toString();
}

bool IsoEra::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t IsoEra::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* IsoEra::clone() {
	 return this->$Enum::clone();
}

void IsoEra::finalize() {
	this->$Enum::finalize();
}


IsoEra* IsoEra::BCE = nullptr;

IsoEra* IsoEra::CE = nullptr;
$IsoEraArray* IsoEra::$VALUES = nullptr;

$IsoEraArray* IsoEra::$values() {
	$init(IsoEra);
	return $new($IsoEraArray, {
		IsoEra::BCE,
		IsoEra::CE
	});
}

$IsoEraArray* IsoEra::values() {
	$init(IsoEra);
	return $cast($IsoEraArray, IsoEra::$VALUES->clone());
}

IsoEra* IsoEra::valueOf($String* name) {
	$init(IsoEra);
	return $cast(IsoEra, $Enum::valueOf(IsoEra::class$, name));
}

void IsoEra::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

IsoEra* IsoEra::of(int32_t isoEra) {
	$init(IsoEra);
	switch (isoEra) {
	case 0:
		{
			return IsoEra::BCE;
		}
	case 1:
		{
			return IsoEra::CE;
		}
	default:
		{
			$throwNew($DateTimeException, $$str({"Invalid era: "_s, $$str(isoEra)}));
		}
	}
}

int32_t IsoEra::getValue() {
	return ordinal();
}

void clinit$IsoEra($Class* class$) {
	$assignStatic(IsoEra::BCE, $new(IsoEra, "BCE"_s, 0));
	$assignStatic(IsoEra::CE, $new(IsoEra, "CE"_s, 1));
	$assignStatic(IsoEra::$VALUES, IsoEra::$values());
}

IsoEra::IsoEra() {
}

$Class* IsoEra::load$($String* name, bool initialize) {
	$loadClass(IsoEra, name, initialize, &_IsoEra_ClassInfo_, clinit$IsoEra, allocate$IsoEra);
	return class$;
}

$Class* IsoEra::class$ = nullptr;

		} // chrono
	} // time
} // java