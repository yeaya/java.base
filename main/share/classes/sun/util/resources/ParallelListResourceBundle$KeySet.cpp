#include <sun/util/resources/ParallelListResourceBundle$KeySet.h>

#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <sun/util/resources/ParallelListResourceBundle$KeySet$1.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $ParallelListResourceBundle$KeySet$1 = ::sun::util::resources::ParallelListResourceBundle$KeySet$1;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _ParallelListResourceBundle$KeySet_FieldInfo_[] = {
	{"set", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ParallelListResourceBundle$KeySet, set)},
	{"parent", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $FINAL, $field(ParallelListResourceBundle$KeySet, parent)},
	{}
};

$MethodInfo _ParallelListResourceBundle$KeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/util/ResourceBundle;)V", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/util/ResourceBundle;)V", $PRIVATE, $method(static_cast<void(ParallelListResourceBundle$KeySet::*)($Set*,$ResourceBundle*)>(&ParallelListResourceBundle$KeySet::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParallelListResourceBundle$KeySet_InnerClassesInfo_[] = {
	{"sun.util.resources.ParallelListResourceBundle$KeySet", "sun.util.resources.ParallelListResourceBundle", "KeySet", $PRIVATE | $STATIC},
	{"sun.util.resources.ParallelListResourceBundle$KeySet$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParallelListResourceBundle$KeySet_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.ParallelListResourceBundle$KeySet",
	"java.util.AbstractSet",
	nullptr,
	_ParallelListResourceBundle$KeySet_FieldInfo_,
	_ParallelListResourceBundle$KeySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/lang/String;>;",
	nullptr,
	_ParallelListResourceBundle$KeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.ParallelListResourceBundle"
};

$Object* allocate$ParallelListResourceBundle$KeySet($Class* clazz) {
	return $of($alloc(ParallelListResourceBundle$KeySet));
}

void ParallelListResourceBundle$KeySet::init$($Set* set, $ResourceBundle* parent) {
	$AbstractSet::init$();
	$set(this, set, set);
	$set(this, parent, parent);
}

bool ParallelListResourceBundle$KeySet::contains(Object$* o) {
	if ($nc(this->set)->contains(o)) {
		return true;
	}
	return (this->parent != nullptr) ? $nc(this->parent)->containsKey($cast($String, o)) : false;
}

$Iterator* ParallelListResourceBundle$KeySet::iterator() {
	if (this->parent == nullptr) {
		return $nc(this->set)->iterator();
	}
	return $new($ParallelListResourceBundle$KeySet$1, this);
}

int32_t ParallelListResourceBundle$KeySet::size() {
	$useLocalCurrentObjectStackCache();
	if (this->parent == nullptr) {
		return $nc(this->set)->size();
	}
	$var($Set, allset, $new($HashSet, static_cast<$Collection*>(this->set)));
	allset->addAll($($nc(this->parent)->keySet()));
	return allset->size();
}

ParallelListResourceBundle$KeySet::ParallelListResourceBundle$KeySet() {
}

$Class* ParallelListResourceBundle$KeySet::load$($String* name, bool initialize) {
	$loadClass(ParallelListResourceBundle$KeySet, name, initialize, &_ParallelListResourceBundle$KeySet_ClassInfo_, allocate$ParallelListResourceBundle$KeySet);
	return class$;
}

$Class* ParallelListResourceBundle$KeySet::class$ = nullptr;

		} // resources
	} // util
} // sun