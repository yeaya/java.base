#include <java/time/zone/TzdbZoneRulesProvider.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/ZoneId.h>
#include <java/time/zone/Ser.h>
#include <java/time/zone/ZoneRules.h>
#include <java/time/zone/ZoneRulesException.h>
#include <java/time/zone/ZoneRulesProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jdk/internal/util/StaticProperty.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ZoneId = ::java::time::ZoneId;
using $Ser = ::java::time::zone::Ser;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $ZoneRulesException = ::java::time::zone::ZoneRulesException;
using $ZoneRulesProvider = ::java::time::zone::ZoneRulesProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace java {
	namespace time {
		namespace zone {

$FieldInfo _TzdbZoneRulesProvider_FieldInfo_[] = {
	{"regionIds", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(TzdbZoneRulesProvider, regionIds)},
	{"versionId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TzdbZoneRulesProvider, versionId)},
	{"regionToRules", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(TzdbZoneRulesProvider, regionToRules)},
	{}
};

$MethodInfo _TzdbZoneRulesProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TzdbZoneRulesProvider::*)()>(&TzdbZoneRulesProvider::init$))},
	{"load", "(Ljava/io/DataInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TzdbZoneRulesProvider::*)($DataInputStream*)>(&TzdbZoneRulesProvider::load)), "java.lang.Exception"},
	{"provideRules", "(Ljava/lang/String;Z)Ljava/time/zone/ZoneRules;", nullptr, $PROTECTED},
	{"provideVersions", "(Ljava/lang/String;)Ljava/util/NavigableMap;", "(Ljava/lang/String;)Ljava/util/NavigableMap<Ljava/lang/String;Ljava/time/zone/ZoneRules;>;", $PROTECTED},
	{"provideZoneIds", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TzdbZoneRulesProvider_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.zone.TzdbZoneRulesProvider",
	"java.time.zone.ZoneRulesProvider",
	nullptr,
	_TzdbZoneRulesProvider_FieldInfo_,
	_TzdbZoneRulesProvider_MethodInfo_
};

$Object* allocate$TzdbZoneRulesProvider($Class* clazz) {
	return $of($alloc(TzdbZoneRulesProvider));
}

void TzdbZoneRulesProvider::init$() {
	$beforeCallerSensitive();
	$ZoneRulesProvider::init$();
	$set(this, regionToRules, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	try {
		$init($File);
		$var($String, libDir, $str({$($StaticProperty::javaHome()), $File::separator, "lib"_s}));
		if ($$new($File, libDir, "tzdb.dat"_s)->exists()) {
			{
				$var($DataInputStream, dis, $new($DataInputStream, $$new($BufferedInputStream, $$new($FileInputStream, $$new($File, libDir, "tzdb.dat"_s)))));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							load(dis);
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							try {
								dis->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						dis->close();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} else {
			{
				$load($ZoneId);
				$var($DataInputStream, dis, $new($DataInputStream, $$new($BufferedInputStream, $($ZoneId::class$->getResourceAsStream("tzdb.dat"_s)))));
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							load(dis);
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							try {
								dis->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						dis->close();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($ZoneRulesException, "Unable to load TZDB time-zone rules"_s, ex);
	}
}

$Set* TzdbZoneRulesProvider::provideZoneIds() {
	return $new($HashSet, static_cast<$Collection*>(this->regionIds));
}

$ZoneRules* TzdbZoneRulesProvider::provideRules($String* zoneId, bool forCaching) {
	$var($Object, obj, $nc(this->regionToRules)->get(zoneId));
	if (obj == nullptr) {
		$throwNew($ZoneRulesException, $$str({"Unknown time-zone ID: "_s, zoneId}));
	}
	try {
		{
			$var($bytes, bytes, nullptr);
			bool var$0 = $instanceOf($bytes, obj);
			if (var$0) {
				$assign(bytes, $cast($bytes, obj));
				var$0 = true;
			}
			if (var$0) {
				$var($DataInputStream, dis, $new($DataInputStream, $$new($ByteArrayInputStream, bytes)));
				$assign(obj, $Ser::read(dis));
				$nc(this->regionToRules)->put(zoneId, obj);
			}
		}
		return $cast($ZoneRules, obj);
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($ZoneRulesException, $$str({"Invalid binary time-zone data: TZDB:"_s, zoneId, ", version: "_s, this->versionId}), ex);
	}
	$shouldNotReachHere();
}

$NavigableMap* TzdbZoneRulesProvider::provideVersions($String* zoneId) {
	$var($TreeMap, map, $new($TreeMap));
	$var($ZoneRules, rules, getRules(zoneId, false));
	if (rules != nullptr) {
		map->put(this->versionId, rules);
	}
	return map;
}

void TzdbZoneRulesProvider::load($DataInputStream* dis) {
	if ($nc(dis)->readByte() != 1) {
		$throwNew($StreamCorruptedException, "File format not recognised"_s);
	}
	$var($String, groupId, $nc(dis)->readUTF());
	if ("TZDB"_s->equals(groupId) == false) {
		$throwNew($StreamCorruptedException, "File format not recognised"_s);
	}
	int32_t versionCount = dis->readShort();
	for (int32_t i = 0; i < versionCount; ++i) {
		$set(this, versionId, dis->readUTF());
	}
	int32_t regionCount = dis->readShort();
	$var($StringArray, regionArray, $new($StringArray, regionCount));
	for (int32_t i = 0; i < regionCount; ++i) {
		regionArray->set(i, $(dis->readUTF()));
	}
	$set(this, regionIds, $Arrays::asList(regionArray));
	int32_t ruleCount = dis->readShort();
	$var($ObjectArray, ruleArray, $new($ObjectArray, ruleCount));
	for (int32_t i = 0; i < ruleCount; ++i) {
		$var($bytes, bytes, $new($bytes, dis->readShort()));
		dis->readFully(bytes);
		ruleArray->set(i, bytes);
	}
	for (int32_t i = 0; i < versionCount; ++i) {
		int32_t versionRegionCount = dis->readShort();
		$nc(this->regionToRules)->clear();
		for (int32_t j = 0; j < versionRegionCount; ++j) {
			$var($String, region, regionArray->get(dis->readShort()));
			$var($Object0, rule, ruleArray->get((int32_t)(dis->readShort() & (uint32_t)0x0000FFFF)));
			$nc(this->regionToRules)->put(region, rule);
		}
	}
}

$String* TzdbZoneRulesProvider::toString() {
	return $str({"TZDB["_s, this->versionId, "]"_s});
}

TzdbZoneRulesProvider::TzdbZoneRulesProvider() {
}

$Class* TzdbZoneRulesProvider::load$($String* name, bool initialize) {
	$loadClass(TzdbZoneRulesProvider, name, initialize, &_TzdbZoneRulesProvider_ClassInfo_, allocate$TzdbZoneRulesProvider);
	return class$;
}

$Class* TzdbZoneRulesProvider::class$ = nullptr;

		} // zone
	} // time
} // java