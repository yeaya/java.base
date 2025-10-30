#include <sun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder.h>

#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AbstractBasicFileAttributeView = ::sun::nio::fs::AbstractBasicFileAttributeView;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractBasicFileAttributeView$AttributesBuilder_FieldInfo_[] = {
	{"names", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(AbstractBasicFileAttributeView$AttributesBuilder, names)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(AbstractBasicFileAttributeView$AttributesBuilder, map)},
	{"copyAll", "Z", nullptr, $PRIVATE, $field(AbstractBasicFileAttributeView$AttributesBuilder, copyAll)},
	{}
};

$MethodInfo _AbstractBasicFileAttributeView$AttributesBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;[Ljava/lang/String;)V", "(Ljava/util/Set<Ljava/lang/String;>;[Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(AbstractBasicFileAttributeView$AttributesBuilder::*)($Set*,$StringArray*)>(&AbstractBasicFileAttributeView$AttributesBuilder::init$))},
	{"add", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0},
	{"create", "(Ljava/util/Set;[Ljava/lang/String;)Lsun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder;", "(Ljava/util/Set<Ljava/lang/String;>;[Ljava/lang/String;)Lsun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder;", $STATIC, $method(static_cast<AbstractBasicFileAttributeView$AttributesBuilder*(*)($Set*,$StringArray*)>(&AbstractBasicFileAttributeView$AttributesBuilder::create))},
	{"match", "(Ljava/lang/String;)Z", nullptr, 0},
	{"unmodifiableMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", 0},
	{}
};

$InnerClassInfo _AbstractBasicFileAttributeView$AttributesBuilder_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractBasicFileAttributeView$AttributesBuilder", "sun.nio.fs.AbstractBasicFileAttributeView", "AttributesBuilder", $STATIC},
	{}
};

$ClassInfo _AbstractBasicFileAttributeView$AttributesBuilder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.AbstractBasicFileAttributeView$AttributesBuilder",
	"java.lang.Object",
	nullptr,
	_AbstractBasicFileAttributeView$AttributesBuilder_FieldInfo_,
	_AbstractBasicFileAttributeView$AttributesBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractBasicFileAttributeView$AttributesBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractBasicFileAttributeView"
};

$Object* allocate$AbstractBasicFileAttributeView$AttributesBuilder($Class* clazz) {
	return $of($alloc(AbstractBasicFileAttributeView$AttributesBuilder));
}

void AbstractBasicFileAttributeView$AttributesBuilder::init$($Set* allowed, $StringArray* requested) {
	$useLocalCurrentObjectStackCache();
	$set(this, names, $new($HashSet));
	$set(this, map, $new($HashMap));
	{
		$var($StringArray, arr$, requested);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				if ($nc(name)->equals("*"_s)) {
					this->copyAll = true;
				} else {
					if (!$nc(allowed)->contains(name)) {
						$throwNew($IllegalArgumentException, $$str({"\'"_s, name, "\' not recognized"_s}));
					}
					$nc(this->names)->add(name);
				}
			}
		}
	}
}

AbstractBasicFileAttributeView$AttributesBuilder* AbstractBasicFileAttributeView$AttributesBuilder::create($Set* allowed, $StringArray* requested) {
	return $new(AbstractBasicFileAttributeView$AttributesBuilder, allowed, requested);
}

bool AbstractBasicFileAttributeView$AttributesBuilder::match($String* name) {
	return this->copyAll || $nc(this->names)->contains(name);
}

void AbstractBasicFileAttributeView$AttributesBuilder::add($String* name, Object$* value) {
	$nc(this->map)->put(name, value);
}

$Map* AbstractBasicFileAttributeView$AttributesBuilder::unmodifiableMap() {
	return $Collections::unmodifiableMap(this->map);
}

AbstractBasicFileAttributeView$AttributesBuilder::AbstractBasicFileAttributeView$AttributesBuilder() {
}

$Class* AbstractBasicFileAttributeView$AttributesBuilder::load$($String* name, bool initialize) {
	$loadClass(AbstractBasicFileAttributeView$AttributesBuilder, name, initialize, &_AbstractBasicFileAttributeView$AttributesBuilder_ClassInfo_, allocate$AbstractBasicFileAttributeView$AttributesBuilder);
	return class$;
}

$Class* AbstractBasicFileAttributeView$AttributesBuilder::class$ = nullptr;

		} // fs
	} // nio
} // sun