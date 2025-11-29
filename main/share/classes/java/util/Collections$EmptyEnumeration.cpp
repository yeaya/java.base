#include <java/util/Collections$EmptyEnumeration.h>

#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _Collections$EmptyEnumeration_FieldInfo_[] = {
	{"EMPTY_ENUMERATION", "Ljava/util/Collections$EmptyEnumeration;", "Ljava/util/Collections$EmptyEnumeration<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(Collections$EmptyEnumeration, EMPTY_ENUMERATION)},
	{}
};

$MethodInfo _Collections$EmptyEnumeration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$EmptyEnumeration::*)()>(&Collections$EmptyEnumeration::init$))},
	{"asIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$InnerClassInfo _Collections$EmptyEnumeration_InnerClassesInfo_[] = {
	{"java.util.Collections$EmptyEnumeration", "java.util.Collections", "EmptyEnumeration", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$EmptyEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$EmptyEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_Collections$EmptyEnumeration_FieldInfo_,
	_Collections$EmptyEnumeration_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TE;>;",
	nullptr,
	_Collections$EmptyEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$EmptyEnumeration($Class* clazz) {
	return $of($alloc(Collections$EmptyEnumeration));
}

Collections$EmptyEnumeration* Collections$EmptyEnumeration::EMPTY_ENUMERATION = nullptr;

void Collections$EmptyEnumeration::init$() {
}

bool Collections$EmptyEnumeration::hasMoreElements() {
	return false;
}

$Object* Collections$EmptyEnumeration::nextElement() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

$Iterator* Collections$EmptyEnumeration::asIterator() {
	return $Collections::emptyIterator();
}

void clinit$Collections$EmptyEnumeration($Class* class$) {
	$assignStatic(Collections$EmptyEnumeration::EMPTY_ENUMERATION, $new(Collections$EmptyEnumeration));
}

Collections$EmptyEnumeration::Collections$EmptyEnumeration() {
}

$Class* Collections$EmptyEnumeration::load$($String* name, bool initialize) {
	$loadClass(Collections$EmptyEnumeration, name, initialize, &_Collections$EmptyEnumeration_ClassInfo_, clinit$Collections$EmptyEnumeration, allocate$Collections$EmptyEnumeration);
	return class$;
}

$Class* Collections$EmptyEnumeration::class$ = nullptr;

	} // util
} // java