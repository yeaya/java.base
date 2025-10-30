#include <sun/util/ResourceBundleEnumeration.h>

#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;

namespace sun {
	namespace util {

$FieldInfo _ResourceBundleEnumeration_FieldInfo_[] = {
	{"set", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", 0, $field(ResourceBundleEnumeration, set)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", 0, $field(ResourceBundleEnumeration, iterator)},
	{"enumeration", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/String;>;", 0, $field(ResourceBundleEnumeration, enumeration)},
	{"next", "Ljava/lang/String;", nullptr, 0, $field(ResourceBundleEnumeration, next)},
	{}
};

$MethodInfo _ResourceBundleEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;Ljava/util/Enumeration;)V", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Enumeration<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ResourceBundleEnumeration::*)($Set*,$Enumeration*)>(&ResourceBundleEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ResourceBundleEnumeration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.ResourceBundleEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_ResourceBundleEnumeration_FieldInfo_,
	_ResourceBundleEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;"
};

$Object* allocate$ResourceBundleEnumeration($Class* clazz) {
	return $of($alloc(ResourceBundleEnumeration));
}

void ResourceBundleEnumeration::init$($Set* set, $Enumeration* enumeration) {
	$set(this, next, nullptr);
	$set(this, set, set);
	$set(this, iterator, $nc(set)->iterator());
	$set(this, enumeration, enumeration);
}

bool ResourceBundleEnumeration::hasMoreElements() {
	if (this->next == nullptr) {
		if ($nc(this->iterator)->hasNext()) {
			$set(this, next, $cast($String, $nc(this->iterator)->next()));
		} else if (this->enumeration != nullptr) {
			while (this->next == nullptr && $nc(this->enumeration)->hasMoreElements()) {
				$set(this, next, $cast($String, $nc(this->enumeration)->nextElement()));
				if ($nc(this->set)->contains(this->next)) {
					$set(this, next, nullptr);
				}
			}
		}
	}
	return this->next != nullptr;
}

$Object* ResourceBundleEnumeration::nextElement() {
	if (hasMoreElements()) {
		$var($String, result, this->next);
		$set(this, next, nullptr);
		return $of(result);
	} else {
		$throwNew($NoSuchElementException);
	}
}

ResourceBundleEnumeration::ResourceBundleEnumeration() {
}

$Class* ResourceBundleEnumeration::load$($String* name, bool initialize) {
	$loadClass(ResourceBundleEnumeration, name, initialize, &_ResourceBundleEnumeration_ClassInfo_, allocate$ResourceBundleEnumeration);
	return class$;
}

$Class* ResourceBundleEnumeration::class$ = nullptr;

	} // util
} // sun