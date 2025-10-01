#include <java/lang/CompoundEnumeration.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $EnumerationArray = $Array<::java::util::Enumeration>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace lang {

$FieldInfo _CompoundEnumeration_FieldInfo_[] = {
	{"enums", "[Ljava/util/Enumeration;", "[Ljava/util/Enumeration<TE;>;", $PRIVATE | $FINAL, $field(CompoundEnumeration, enums)},
	{"index", "I", nullptr, $PRIVATE, $field(CompoundEnumeration, index)},
	{}
};

$MethodInfo _CompoundEnumeration_MethodInfo_[] = {
	{"<init>", "([Ljava/util/Enumeration;)V", "([Ljava/util/Enumeration<TE;>;)V", $PUBLIC, $method(static_cast<void(CompoundEnumeration::*)($EnumerationArray*)>(&CompoundEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CompoundEnumeration::*)()>(&CompoundEnumeration::next))},
	{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$ClassInfo _CompoundEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.CompoundEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_CompoundEnumeration_FieldInfo_,
	_CompoundEnumeration_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TE;>;"
};

$Object* allocate$CompoundEnumeration($Class* clazz) {
	return $of($alloc(CompoundEnumeration));
}

void CompoundEnumeration::init$($EnumerationArray* enums) {
	$set(this, enums, enums);
}

bool CompoundEnumeration::next() {
	while (this->index < $nc(this->enums)->length) {
		if ($nc(this->enums)->get(this->index) != nullptr && $nc($nc(this->enums)->get(this->index))->hasMoreElements()) {
			return true;
		}
		++this->index;
	}
	return false;
}

bool CompoundEnumeration::hasMoreElements() {
	return next();
}

$Object* CompoundEnumeration::nextElement() {
	if (!next()) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc($nc(this->enums)->get(this->index))->nextElement());
}

CompoundEnumeration::CompoundEnumeration() {
}

$Class* CompoundEnumeration::load$($String* name, bool initialize) {
	$loadClass(CompoundEnumeration, name, initialize, &_CompoundEnumeration_ClassInfo_, allocate$CompoundEnumeration);
	return class$;
}

$Class* CompoundEnumeration::class$ = nullptr;

	} // lang
} // java