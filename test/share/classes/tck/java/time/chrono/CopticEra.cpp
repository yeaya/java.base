#include <tck/java/time/chrono/CopticEra.h>

#include <java/lang/Enum.h>
#include <java/time/DateTimeException.h>
#include <jcpp.h>

#undef AM
#undef BEFORE_AM

using $CopticEraArray = $Array<::tck::java::time::chrono::CopticEra>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

$FieldInfo _CopticEra_FieldInfo_[] = {
	{"BEFORE_AM", "Ltck/java/time/chrono/CopticEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CopticEra, BEFORE_AM)},
	{"AM", "Ltck/java/time/chrono/CopticEra;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CopticEra, AM)},
	{"$VALUES", "[Ltck/java/time/chrono/CopticEra;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CopticEra, $VALUES)},
	{}
};

$MethodInfo _CopticEra_MethodInfo_[] = {
	{"$values", "()[Ltck/java/time/chrono/CopticEra;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CopticEra, $values, $CopticEraArray*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CopticEra, init$, void, $String*, int32_t)},
	{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(CopticEra, getValue, int32_t)},
	{"of", "(I)Ltck/java/time/chrono/CopticEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(CopticEra, of, CopticEra*, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ltck/java/time/chrono/CopticEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(CopticEra, valueOf, CopticEra*, $String*)},
	{"values", "()[Ltck/java/time/chrono/CopticEra;", nullptr, $PUBLIC | $STATIC, $staticMethod(CopticEra, values, $CopticEraArray*)},
	{}
};

$ClassInfo _CopticEra_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"tck.java.time.chrono.CopticEra",
	"java.lang.Enum",
	"java.time.chrono.Era",
	_CopticEra_FieldInfo_,
	_CopticEra_MethodInfo_,
	"Ljava/lang/Enum<Ltck/java/time/chrono/CopticEra;>;Ljava/time/chrono/Era;"
};

$Object* allocate$CopticEra($Class* clazz) {
	return $of($alloc(CopticEra));
}

$String* CopticEra::toString() {
	 return this->$Enum::toString();
}

bool CopticEra::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t CopticEra::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* CopticEra::clone() {
	 return this->$Enum::clone();
}

void CopticEra::finalize() {
	this->$Enum::finalize();
}

CopticEra* CopticEra::BEFORE_AM = nullptr;
CopticEra* CopticEra::AM = nullptr;
$CopticEraArray* CopticEra::$VALUES = nullptr;

$CopticEraArray* CopticEra::$values() {
	$init(CopticEra);
	return $new($CopticEraArray, {
		CopticEra::BEFORE_AM,
		CopticEra::AM
	});
}

$CopticEraArray* CopticEra::values() {
	$init(CopticEra);
	return $cast($CopticEraArray, CopticEra::$VALUES->clone());
}

CopticEra* CopticEra::valueOf($String* name) {
	$init(CopticEra);
	return $cast(CopticEra, $Enum::valueOf(CopticEra::class$, name));
}

void CopticEra::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

CopticEra* CopticEra::of(int32_t era) {
	$init(CopticEra);
	$useLocalCurrentObjectStackCache();
	switch (era) {
	case 0:
		{
			return CopticEra::BEFORE_AM;
		}
	case 1:
		{
			return CopticEra::AM;
		}
	default:
		{
			$throwNew($DateTimeException, $$str({"Invalid era: "_s, $$str(era)}));
		}
	}
}

int32_t CopticEra::getValue() {
	return ordinal();
}

void clinit$CopticEra($Class* class$) {
	$assignStatic(CopticEra::BEFORE_AM, $new(CopticEra, "BEFORE_AM"_s, 0));
	$assignStatic(CopticEra::AM, $new(CopticEra, "AM"_s, 1));
	$assignStatic(CopticEra::$VALUES, CopticEra::$values());
}

CopticEra::CopticEra() {
}

$Class* CopticEra::load$($String* name, bool initialize) {
	$loadClass(CopticEra, name, initialize, &_CopticEra_ClassInfo_, clinit$CopticEra, allocate$CopticEra);
	return class$;
}

$Class* CopticEra::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // tck