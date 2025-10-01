#include <java/lang/ProcessEnvironment$CheckedValues.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$CheckedValues_FieldInfo_[] = {
	{"c", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$CheckedValues, c)},
	{}
};

$MethodInfo _ProcessEnvironment$CheckedValues_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ProcessEnvironment$CheckedValues::*)($Collection*)>(&ProcessEnvironment$CheckedValues::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$CheckedValues_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$CheckedValues", "java.lang.ProcessEnvironment", "CheckedValues", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessEnvironment$CheckedValues_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$CheckedValues",
	"java.util.AbstractCollection",
	nullptr,
	_ProcessEnvironment$CheckedValues_FieldInfo_,
	_ProcessEnvironment$CheckedValues_MethodInfo_,
	"Ljava/util/AbstractCollection<Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$CheckedValues_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$CheckedValues($Class* clazz) {
	return $of($alloc(ProcessEnvironment$CheckedValues));
}

void ProcessEnvironment$CheckedValues::init$($Collection* c) {
	$AbstractCollection::init$();
	$set(this, c, c);
}

int32_t ProcessEnvironment$CheckedValues::size() {
	return $nc(this->c)->size();
}

bool ProcessEnvironment$CheckedValues::isEmpty() {
	return $nc(this->c)->isEmpty();
}

void ProcessEnvironment$CheckedValues::clear() {
	$nc(this->c)->clear();
}

$Iterator* ProcessEnvironment$CheckedValues::iterator() {
	return $nc(this->c)->iterator();
}

bool ProcessEnvironment$CheckedValues::contains(Object$* o) {
	return $nc(this->c)->contains($($ProcessEnvironment::nonNullString(o)));
}

bool ProcessEnvironment$CheckedValues::remove(Object$* o) {
	return $nc(this->c)->remove($($ProcessEnvironment::nonNullString(o)));
}

ProcessEnvironment$CheckedValues::ProcessEnvironment$CheckedValues() {
}

$Class* ProcessEnvironment$CheckedValues::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$CheckedValues, name, initialize, &_ProcessEnvironment$CheckedValues_ClassInfo_, allocate$ProcessEnvironment$CheckedValues);
	return class$;
}

$Class* ProcessEnvironment$CheckedValues::class$ = nullptr;

	} // lang
} // java