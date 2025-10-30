#include <java/util/TreeMap.h>

#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Comparable.h>
#include <java/lang/InternalError.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/NavigableSet.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/SortedSet.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$AscendingSubMap.h>
#include <java/util/TreeMap$DescendingKeyIterator.h>
#include <java/util/TreeMap$DescendingKeySpliterator.h>
#include <java/util/TreeMap$DescendingSubMap.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$EntrySet.h>
#include <java/util/TreeMap$KeyIterator.h>
#include <java/util/TreeMap$KeySet.h>
#include <java/util/TreeMap$KeySpliterator.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/TreeMap$PrivateEntryIterator.h>
#include <java/util/TreeMap$Values.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef BLACK
#undef RED
#undef UNBOUNDED

using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $NavigableSet = ::java::util::NavigableSet;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $SortedSet = ::java::util::SortedSet;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap$AscendingSubMap = ::java::util::TreeMap$AscendingSubMap;
using $TreeMap$DescendingKeyIterator = ::java::util::TreeMap$DescendingKeyIterator;
using $TreeMap$DescendingKeySpliterator = ::java::util::TreeMap$DescendingKeySpliterator;
using $TreeMap$DescendingSubMap = ::java::util::TreeMap$DescendingSubMap;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$EntrySet = ::java::util::TreeMap$EntrySet;
using $TreeMap$KeyIterator = ::java::util::TreeMap$KeyIterator;
using $TreeMap$KeySet = ::java::util::TreeMap$KeySet;
using $TreeMap$KeySpliterator = ::java::util::TreeMap$KeySpliterator;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;
using $TreeMap$PrivateEntryIterator = ::java::util::TreeMap$PrivateEntryIterator;
using $TreeMap$Values = ::java::util::TreeMap$Values;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _TreeMap_FieldInfo_[] = {
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TK;>;", $PRIVATE | $FINAL, $field(TreeMap, comparator$)},
	{"root", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", $PRIVATE | $TRANSIENT, $field(TreeMap, root)},
	{"size", "I", nullptr, $PRIVATE | $TRANSIENT, $field(TreeMap, size$)},
	{"modCount", "I", nullptr, $PRIVATE | $TRANSIENT, $field(TreeMap, modCount)},
	{"entrySet", "Ljava/util/TreeMap$EntrySet;", "Ljava/util/TreeMap<TK;TV;>.EntrySet;", $PRIVATE | $TRANSIENT, $field(TreeMap, entrySet$)},
	{"navigableKeySet", "Ljava/util/TreeMap$KeySet;", "Ljava/util/TreeMap$KeySet<TK;>;", $PRIVATE | $TRANSIENT, $field(TreeMap, navigableKeySet$)},
	{"descendingMap", "Ljava/util/NavigableMap;", "Ljava/util/NavigableMap<TK;TV;>;", $PRIVATE | $TRANSIENT, $field(TreeMap, descendingMap$)},
	{"UNBOUNDED", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TreeMap, UNBOUNDED)},
	{"RED", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TreeMap, RED)},
	{"BLACK", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TreeMap, BLACK)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TreeMap, serialVersionUID)},
	{}
};

$MethodInfo _TreeMap_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeMap::*)()>(&TreeMap::init$))},
	{"<init>", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TK;>;)V", $PUBLIC, $method(static_cast<void(TreeMap::*)($Comparator*)>(&TreeMap::init$))},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC, $method(static_cast<void(TreeMap::*)($Map*)>(&TreeMap::init$))},
	{"<init>", "(Ljava/util/SortedMap;)V", "(Ljava/util/SortedMap<TK;+TV;>;)V", $PUBLIC, $method(static_cast<void(TreeMap::*)($SortedMap*)>(&TreeMap::init$))},
	{"addAllForTreeSet", "(Ljava/util/SortedSet;Ljava/lang/Object;)V", "(Ljava/util/SortedSet<+TK;>;TV;)V", 0},
	{"addEntry", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/TreeMap$Entry;Z)V", "(TK;TV;Ljava/util/TreeMap$Entry<TK;TV;>;Z)V", $PRIVATE, $method(static_cast<void(TreeMap::*)(Object$*,Object$*,$TreeMap$Entry*,bool)>(&TreeMap::addEntry))},
	{"addEntryToEmptyMap", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)(Object$*,Object$*)>(&TreeMap::addEntryToEmptyMap))},
	{"buildFromSorted", "(ILjava/util/Iterator;Ljava/io/ObjectInputStream;Ljava/lang/Object;)V", "(ILjava/util/Iterator<*>;Ljava/io/ObjectInputStream;TV;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)(int32_t,$Iterator*,$ObjectInputStream*,Object$*)>(&TreeMap::buildFromSorted)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"buildFromSorted", "(IIIILjava/util/Iterator;Ljava/io/ObjectInputStream;Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(IIIILjava/util/Iterator<*>;Ljava/io/ObjectInputStream;TV;)Ljava/util/TreeMap$Entry<TK;TV;>;", $PRIVATE | $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(int32_t,int32_t,int32_t,int32_t,$Iterator*,$ObjectInputStream*,Object$*)>(&TreeMap::buildFromSorted)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"callMappingFunctionWithCheck", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PRIVATE, $method(static_cast<$Object*(TreeMap::*)(Object$*,$Function*)>(&TreeMap::callMappingFunctionWithCheck))},
	{"callRemappingFunctionWithCheck", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PRIVATE, $method(static_cast<$Object*(TreeMap::*)(Object$*,Object$*,$BiFunction*)>(&TreeMap::callRemappingFunctionWithCheck))},
	{"ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"colorOf", "(Ljava/util/TreeMap$Entry;)Z", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($TreeMap$Entry*)>(&TreeMap::colorOf))},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $FINAL, $method(static_cast<int32_t(TreeMap::*)(Object$*,Object$*)>(&TreeMap::compare))},
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeRedLevel", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TreeMap::computeRedLevel))},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"deleteEntry", "(Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)($TreeMap$Entry*)>(&TreeMap::deleteEntry))},
	{"descendingKeyIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", 0},
	{"descendingKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC},
	{"descendingKeySpliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $FINAL, $method(static_cast<$Spliterator*(TreeMap::*)()>(&TreeMap::descendingKeySpliterator))},
	{"descendingMap", "()Ljava/util/NavigableMap;", "()Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"exportEntry", "(Ljava/util/TreeMap$Entry;)Ljava/util/Map$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Ljava/util/Map$Entry<TK;TV;>;", $STATIC, $method(static_cast<$Map$Entry*(*)($TreeMap$Entry*)>(&TreeMap::exportEntry))},
	{"firstEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"firstKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"fixAfterDeletion", "(Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)($TreeMap$Entry*)>(&TreeMap::fixAfterDeletion))},
	{"fixAfterInsertion", "(Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)($TreeMap$Entry*)>(&TreeMap::fixAfterInsertion))},
	{"floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC},
	{"forEach", "(Ljava/util/function/BiConsumer;)V", "(Ljava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"getCeilingEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(Object$*)>(&TreeMap::getCeilingEntry))},
	{"getEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(Object$*)>(&TreeMap::getEntry))},
	{"getEntryUsingComparator", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(Object$*)>(&TreeMap::getEntryUsingComparator))},
	{"getFirstEntry", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)()>(&TreeMap::getFirstEntry))},
	{"getFloorEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(Object$*)>(&TreeMap::getFloorEntry))},
	{"getHigherEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(Object$*)>(&TreeMap::getHigherEntry))},
	{"getLastEntry", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)()>(&TreeMap::getLastEntry))},
	{"getLowerEntry", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", $FINAL, $method(static_cast<$TreeMap$Entry*(TreeMap::*)(Object$*)>(&TreeMap::getLowerEntry))},
	{"headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"key", "(Ljava/util/TreeMap$Entry;)Ljava/lang/Object;", "<K:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;*>;)TK;", $STATIC, $method(static_cast<$Object*(*)($TreeMap$Entry*)>(&TreeMap::key))},
	{"keyIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", 0},
	{"keyOrNull", "(Ljava/util/TreeMap$Entry;)Ljava/lang/Object;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)TK;", $STATIC, $method(static_cast<$Object*(*)($TreeMap$Entry*)>(&TreeMap::keyOrNull))},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<TK;>;", $PUBLIC},
	{"keySpliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", $FINAL, $method(static_cast<$Spliterator*(TreeMap::*)()>(&TreeMap::keySpliterator))},
	{"keySpliteratorFor", "(Ljava/util/NavigableMap;)Ljava/util/Spliterator;", "<K:Ljava/lang/Object;>(Ljava/util/NavigableMap<TK;*>;)Ljava/util/Spliterator<TK;>;", $STATIC, $method(static_cast<$Spliterator*(*)($NavigableMap*)>(&TreeMap::keySpliteratorFor))},
	{"lastEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"lastKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"leftOf", "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Ljava/util/TreeMap$Entry<TK;TV;>;", $PRIVATE | $STATIC, $method(static_cast<$TreeMap$Entry*(*)($TreeMap$Entry*)>(&TreeMap::leftOf))},
	{"lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"mergeValue", "(Ljava/util/TreeMap$Entry;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(Ljava/util/TreeMap$Entry<TK;TV;>;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PRIVATE, $method(static_cast<$Object*(TreeMap::*)($TreeMap$Entry*,Object$*,$BiFunction*)>(&TreeMap::mergeValue))},
	{"navigableKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC},
	{"parentOf", "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Ljava/util/TreeMap$Entry<TK;TV;>;", $PRIVATE | $STATIC, $method(static_cast<$TreeMap$Entry*(*)($TreeMap$Entry*)>(&TreeMap::parentOf))},
	{"pollFirstEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"pollLastEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"predecessor", "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Ljava/util/TreeMap$Entry<TK;TV;>;", $STATIC, $method(static_cast<$TreeMap$Entry*(*)($TreeMap$Entry*)>(&TreeMap::predecessor))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;Z)Ljava/lang/Object;", "(TK;TV;Z)TV;", $PRIVATE, $method(static_cast<$Object*(TreeMap::*)(Object$*,Object$*,bool)>(&TreeMap::put))},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeMap::*)($ObjectInputStream*)>(&TreeMap::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readTreeSet", "(ILjava/io/ObjectInputStream;Ljava/lang/Object;)V", "(ILjava/io/ObjectInputStream;TV;)V", 0, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remapValue", "(Ljava/util/TreeMap$Entry;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(Ljava/util/TreeMap$Entry<TK;TV;>;TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PRIVATE, $method(static_cast<$Object*(TreeMap::*)($TreeMap$Entry*,Object$*,$BiFunction*)>(&TreeMap::remapValue))},
	{"*remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{"rightOf", "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Ljava/util/TreeMap$Entry<TK;TV;>;", $PRIVATE | $STATIC, $method(static_cast<$TreeMap$Entry*(*)($TreeMap$Entry*)>(&TreeMap::rightOf))},
	{"rotateLeft", "(Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)($TreeMap$Entry*)>(&TreeMap::rotateLeft))},
	{"rotateRight", "(Ljava/util/TreeMap$Entry;)V", "(Ljava/util/TreeMap$Entry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(TreeMap::*)($TreeMap$Entry*)>(&TreeMap::rotateRight))},
	{"setColor", "(Ljava/util/TreeMap$Entry;Z)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;Z)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($TreeMap$Entry*,bool)>(&TreeMap::setColor))},
	{"size", "()I", nullptr, $PUBLIC},
	{"subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;ZTK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"successor", "(Ljava/util/TreeMap$Entry;)Ljava/util/TreeMap$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/TreeMap$Entry<TK;TV;>;)Ljava/util/TreeMap$Entry<TK;TV;>;", $STATIC, $method(static_cast<$TreeMap$Entry*(*)($TreeMap$Entry*)>(&TreeMap::successor))},
	{"tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)(Object$*,Object$*)>(&TreeMap::valEquals))},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeMap::*)($ObjectOutputStream*)>(&TreeMap::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _TreeMap_InnerClassesInfo_[] = {
	{"java.util.TreeMap$EntrySpliterator", "java.util.TreeMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$ValueSpliterator", "java.util.TreeMap", "ValueSpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$DescendingKeySpliterator", "java.util.TreeMap", "DescendingKeySpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$KeySpliterator", "java.util.TreeMap", "KeySpliterator", $STATIC | $FINAL},
	{"java.util.TreeMap$TreeMapSpliterator", "java.util.TreeMap", "TreeMapSpliterator", $STATIC},
	{"java.util.TreeMap$Entry", "java.util.TreeMap", "Entry", $STATIC | $FINAL},
	{"java.util.TreeMap$SubMap", "java.util.TreeMap", "SubMap", $PRIVATE},
	{"java.util.TreeMap$DescendingSubMap", "java.util.TreeMap", "DescendingSubMap", $STATIC | $FINAL},
	{"java.util.TreeMap$AscendingSubMap", "java.util.TreeMap", "AscendingSubMap", $STATIC | $FINAL},
	{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
	{"java.util.TreeMap$DescendingKeyIterator", "java.util.TreeMap", "DescendingKeyIterator", $FINAL},
	{"java.util.TreeMap$KeyIterator", "java.util.TreeMap", "KeyIterator", $FINAL},
	{"java.util.TreeMap$ValueIterator", "java.util.TreeMap", "ValueIterator", $FINAL},
	{"java.util.TreeMap$EntryIterator", "java.util.TreeMap", "EntryIterator", $FINAL},
	{"java.util.TreeMap$PrivateEntryIterator", "java.util.TreeMap", "PrivateEntryIterator", $ABSTRACT},
	{"java.util.TreeMap$KeySet", "java.util.TreeMap", "KeySet", $STATIC | $FINAL},
	{"java.util.TreeMap$EntrySet", "java.util.TreeMap", "EntrySet", 0},
	{"java.util.TreeMap$Values", "java.util.TreeMap", "Values", 0},
	{}
};

$ClassInfo _TreeMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.TreeMap",
	"java.util.AbstractMap",
	"java.util.NavigableMap,java.lang.Cloneable,java.io.Serializable",
	_TreeMap_FieldInfo_,
	_TreeMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/AbstractMap<TK;TV;>;Ljava/util/NavigableMap<TK;TV;>;Ljava/lang/Cloneable;Ljava/io/Serializable;",
	nullptr,
	_TreeMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.TreeMap$EntrySpliterator,java.util.TreeMap$ValueSpliterator,java.util.TreeMap$DescendingKeySpliterator,java.util.TreeMap$KeySpliterator,java.util.TreeMap$TreeMapSpliterator,java.util.TreeMap$Entry,java.util.TreeMap$SubMap,java.util.TreeMap$DescendingSubMap,java.util.TreeMap$DescendingSubMap$DescendingEntrySetView,java.util.TreeMap$AscendingSubMap,java.util.TreeMap$AscendingSubMap$AscendingEntrySetView,java.util.TreeMap$NavigableSubMap,java.util.TreeMap$NavigableSubMap$DescendingSubMapKeyIterator,java.util.TreeMap$NavigableSubMap$SubMapKeyIterator,java.util.TreeMap$NavigableSubMap$DescendingSubMapEntryIterator,java.util.TreeMap$NavigableSubMap$SubMapEntryIterator,java.util.TreeMap$NavigableSubMap$SubMapIterator,java.util.TreeMap$NavigableSubMap$EntrySetView,java.util.TreeMap$DescendingKeyIterator,java.util.TreeMap$KeyIterator,java.util.TreeMap$ValueIterator,java.util.TreeMap$EntryIterator,java.util.TreeMap$PrivateEntryIterator,java.util.TreeMap$KeySet,java.util.TreeMap$EntrySet,java.util.TreeMap$Values"
};

$Object* allocate$TreeMap($Class* clazz) {
	return $of($alloc(TreeMap));
}

bool TreeMap::isEmpty() {
	 return this->$AbstractMap::isEmpty();
}

bool TreeMap::equals(Object$* o) {
	 return this->$AbstractMap::equals(o);
}

int32_t TreeMap::hashCode() {
	 return this->$AbstractMap::hashCode();
}

$String* TreeMap::toString() {
	 return this->$AbstractMap::toString();
}

$Object* TreeMap::getOrDefault(Object$* key, Object$* defaultValue) {
	 return this->$AbstractMap::getOrDefault(key, defaultValue);
}

bool TreeMap::remove(Object$* key, Object$* value) {
	 return this->$AbstractMap::remove(key, value);
}

void TreeMap::finalize() {
	this->$AbstractMap::finalize();
}

$Object* TreeMap::UNBOUNDED = nullptr;

void TreeMap::init$() {
	$AbstractMap::init$();
	this->size$ = 0;
	this->modCount = 0;
	$set(this, comparator$, nullptr);
}

void TreeMap::init$($Comparator* comparator) {
	$AbstractMap::init$();
	this->size$ = 0;
	this->modCount = 0;
	$set(this, comparator$, comparator);
}

void TreeMap::init$($Map* m) {
	$AbstractMap::init$();
	this->size$ = 0;
	this->modCount = 0;
	$set(this, comparator$, nullptr);
	putAll(m);
}

void TreeMap::init$($SortedMap* m) {
	$useLocalCurrentObjectStackCache();
	$AbstractMap::init$();
	this->size$ = 0;
	this->modCount = 0;
	$set(this, comparator$, $nc(m)->comparator());
	try {
		int32_t var$0 = m->size();
		buildFromSorted(var$0, $($nc($(m->entrySet()))->iterator()), nullptr, nullptr);
	} catch ($IOException& cannotHappen) {
	} catch ($ClassNotFoundException& cannotHappen) {
	}
}

int32_t TreeMap::size() {
	return this->size$;
}

bool TreeMap::containsKey(Object$* key) {
	return getEntry(key) != nullptr;
}

bool TreeMap::containsValue(Object$* value) {
	{
		$var($TreeMap$Entry, e, getFirstEntry());
		for (; e != nullptr; $assign(e, successor(e))) {
			if (valEquals(value, e->value)) {
				return true;
			}
		}
	}
	return false;
}

$Object* TreeMap::get(Object$* key) {
	$var($TreeMap$Entry, p, getEntry(key));
	return $of((p == nullptr ? ($Object*)nullptr : $nc(p)->value));
}

$Comparator* TreeMap::comparator() {
	return this->comparator$;
}

$Object* TreeMap::firstKey() {
	return $of(key($(getFirstEntry())));
}

$Object* TreeMap::lastKey() {
	return $of(key($(getLastEntry())));
}

void TreeMap::putAll($Map* map) {
	$useLocalCurrentObjectStackCache();
	int32_t mapSize = $nc(map)->size();
	if (this->size$ == 0 && mapSize != 0 && $instanceOf($SortedMap, map)) {
		if ($Objects::equals(this->comparator$, $($nc(($cast($SortedMap, map)))->comparator()))) {
			++this->modCount;
			try {
				buildFromSorted(mapSize, $($nc($(map->entrySet()))->iterator()), nullptr, nullptr);
			} catch ($IOException& cannotHappen) {
			} catch ($ClassNotFoundException& cannotHappen) {
			}
			return;
		}
	}
	$AbstractMap::putAll(map);
}

$TreeMap$Entry* TreeMap::getEntry(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if (this->comparator$ != nullptr) {
		return getEntryUsingComparator(key);
	}
	$Objects::requireNonNull(key);
	$var($Comparable, k, $cast($Comparable, key));
	$var($TreeMap$Entry, p, this->root);
	while (p != nullptr) {
		int32_t cmp = k->compareTo(p->key);
		if (cmp < 0) {
			$assign(p, p->left);
		} else if (cmp > 0) {
			$assign(p, p->right);
		} else {
			return p;
		}
	}
	return nullptr;
}

$TreeMap$Entry* TreeMap::getEntryUsingComparator(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, k, key);
	$var($Comparator, cpr, this->comparator$);
	if (cpr != nullptr) {
		$var($TreeMap$Entry, p, this->root);
		while (p != nullptr) {
			int32_t cmp = cpr->compare(k, p->key);
			if (cmp < 0) {
				$assign(p, p->left);
			} else if (cmp > 0) {
				$assign(p, p->right);
			} else {
				return p;
			}
		}
	}
	return nullptr;
}

$TreeMap$Entry* TreeMap::getCeilingEntry(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, this->root);
	while (p != nullptr) {
		int32_t cmp = compare(key, p->key);
		if (cmp < 0) {
			if (p->left != nullptr) {
				$assign(p, p->left);
			} else {
				return p;
			}
		} else if (cmp > 0) {
			if (p->right != nullptr) {
				$assign(p, p->right);
			} else {
				$var($TreeMap$Entry, parent, p->parent);
				$var($TreeMap$Entry, ch, p);
				while (parent != nullptr && ch == parent->right) {
					$assign(ch, parent);
					$assign(parent, parent->parent);
				}
				return parent;
			}
		} else {
			return p;
		}
	}
	return nullptr;
}

$TreeMap$Entry* TreeMap::getFloorEntry(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, this->root);
	while (p != nullptr) {
		int32_t cmp = compare(key, p->key);
		if (cmp > 0) {
			if (p->right != nullptr) {
				$assign(p, p->right);
			} else {
				return p;
			}
		} else if (cmp < 0) {
			if (p->left != nullptr) {
				$assign(p, p->left);
			} else {
				$var($TreeMap$Entry, parent, p->parent);
				$var($TreeMap$Entry, ch, p);
				while (parent != nullptr && ch == parent->left) {
					$assign(ch, parent);
					$assign(parent, parent->parent);
				}
				return parent;
			}
		} else {
			return p;
		}
	}
	return nullptr;
}

$TreeMap$Entry* TreeMap::getHigherEntry(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, this->root);
	while (p != nullptr) {
		int32_t cmp = compare(key, p->key);
		if (cmp < 0) {
			if (p->left != nullptr) {
				$assign(p, p->left);
			} else {
				return p;
			}
		} else if (p->right != nullptr) {
			$assign(p, p->right);
		} else {
			$var($TreeMap$Entry, parent, p->parent);
			$var($TreeMap$Entry, ch, p);
			while (parent != nullptr && ch == parent->right) {
				$assign(ch, parent);
				$assign(parent, parent->parent);
			}
			return parent;
		}
	}
	return nullptr;
}

$TreeMap$Entry* TreeMap::getLowerEntry(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, this->root);
	while (p != nullptr) {
		int32_t cmp = compare(key, p->key);
		if (cmp > 0) {
			if (p->right != nullptr) {
				$assign(p, p->right);
			} else {
				return p;
			}
		} else if (p->left != nullptr) {
			$assign(p, p->left);
		} else {
			$var($TreeMap$Entry, parent, p->parent);
			$var($TreeMap$Entry, ch, p);
			while (parent != nullptr && ch == parent->left) {
				$assign(ch, parent);
				$assign(parent, parent->parent);
			}
			return parent;
		}
	}
	return nullptr;
}

$Object* TreeMap::put(Object$* key, Object$* value) {
	return $of(put(key, value, true));
}

$Object* TreeMap::putIfAbsent(Object$* key, Object$* value) {
	return $of(put(key, value, false));
}

$Object* TreeMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(mappingFunction);
	$var($Object, newValue, nullptr);
	$var($TreeMap$Entry, t, this->root);
	if (t == nullptr) {
		$assign(newValue, callMappingFunctionWithCheck(key, mappingFunction));
		if (newValue != nullptr) {
			addEntryToEmptyMap(key, newValue);
			return $of(newValue);
		} else {
			return $of(nullptr);
		}
	}
	int32_t cmp = 0;
	$var($TreeMap$Entry, parent, nullptr);
	$var($Comparator, cpr, this->comparator$);
	if (cpr != nullptr) {
		do {
			$assign(parent, t);
			cmp = cpr->compare(key, $nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				if ($nc(t)->value == nullptr) {
					$set(t, value, callMappingFunctionWithCheck(key, mappingFunction));
				}
				return $of($nc(t)->value);
			}
		} while (t != nullptr);
	} else {
		$Objects::requireNonNull(key);
		$var($Comparable, k, $cast($Comparable, key));
		do {
			$assign(parent, t);
			cmp = k->compareTo($nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				if ($nc(t)->value == nullptr) {
					$set(t, value, callMappingFunctionWithCheck(key, mappingFunction));
				}
				return $of($nc(t)->value);
			}
		} while (t != nullptr);
	}
	$assign(newValue, callMappingFunctionWithCheck(key, mappingFunction));
	if (newValue != nullptr) {
		addEntry(key, newValue, parent, cmp < 0);
		return $of(newValue);
	}
	return $of(nullptr);
}

$Object* TreeMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$Objects::requireNonNull(remappingFunction);
	$var($TreeMap$Entry, oldEntry, getEntry(key));
	if (oldEntry != nullptr && oldEntry->value != nullptr) {
		return $of(remapValue(oldEntry, key, remappingFunction));
	} else {
		return $of(nullptr);
	}
}

$Object* TreeMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	$var($Object, newValue, nullptr);
	$var($TreeMap$Entry, t, this->root);
	if (t == nullptr) {
		$assign(newValue, callRemappingFunctionWithCheck(key, nullptr, remappingFunction));
		if (newValue != nullptr) {
			addEntryToEmptyMap(key, newValue);
			return $of(newValue);
		} else {
			return $of(nullptr);
		}
	}
	int32_t cmp = 0;
	$var($TreeMap$Entry, parent, nullptr);
	$var($Comparator, cpr, this->comparator$);
	if (cpr != nullptr) {
		do {
			$assign(parent, t);
			cmp = cpr->compare(key, $nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				return $of(remapValue(t, key, remappingFunction));
			}
		} while (t != nullptr);
	} else {
		$Objects::requireNonNull(key);
		$var($Comparable, k, $cast($Comparable, key));
		do {
			$assign(parent, t);
			cmp = k->compareTo($nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				return $of(remapValue(t, key, remappingFunction));
			}
		} while (t != nullptr);
	}
	$assign(newValue, callRemappingFunctionWithCheck(key, nullptr, remappingFunction));
	if (newValue != nullptr) {
		addEntry(key, newValue, parent, cmp < 0);
		return $of(newValue);
	}
	return $of(nullptr);
}

$Object* TreeMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	$Objects::requireNonNull(value);
	$var($TreeMap$Entry, t, this->root);
	if (t == nullptr) {
		addEntryToEmptyMap(key, value);
		return $of(value);
	}
	int32_t cmp = 0;
	$var($TreeMap$Entry, parent, nullptr);
	$var($Comparator, cpr, this->comparator$);
	if (cpr != nullptr) {
		do {
			$assign(parent, t);
			cmp = cpr->compare(key, $nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				return $of(mergeValue(t, value, remappingFunction));
			}
		} while (t != nullptr);
	} else {
		$Objects::requireNonNull(key);
		$var($Comparable, k, $cast($Comparable, key));
		do {
			$assign(parent, t);
			cmp = k->compareTo($nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				return $of(mergeValue(t, value, remappingFunction));
			}
		} while (t != nullptr);
	}
	addEntry(key, value, parent, cmp < 0);
	return $of(value);
}

$Object* TreeMap::callMappingFunctionWithCheck(Object$* key, $Function* mappingFunction) {
	int32_t mc = this->modCount;
	$var($Object, newValue, $nc(mappingFunction)->apply(key));
	if (mc != this->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	return $of(newValue);
}

$Object* TreeMap::callRemappingFunctionWithCheck(Object$* key, Object$* oldValue, $BiFunction* remappingFunction) {
	int32_t mc = this->modCount;
	$var($Object, newValue, $nc(remappingFunction)->apply(key, oldValue));
	if (mc != this->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	return $of(newValue);
}

void TreeMap::addEntry(Object$* key, Object$* value, $TreeMap$Entry* parent, bool addToLeft) {
	$var($TreeMap$Entry, e, $new($TreeMap$Entry, key, value, parent));
	if (addToLeft) {
		$set($nc(parent), left, e);
	} else {
		$set($nc(parent), right, e);
	}
	fixAfterInsertion(e);
	++this->size$;
	++this->modCount;
}

void TreeMap::addEntryToEmptyMap(Object$* key, Object$* value) {
	compare(key, key);
	$set(this, root, $new($TreeMap$Entry, key, value, nullptr));
	this->size$ = 1;
	++this->modCount;
}

$Object* TreeMap::put(Object$* key, Object$* value, bool replaceOld) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, t, this->root);
	if (t == nullptr) {
		addEntryToEmptyMap(key, value);
		return $of(nullptr);
	}
	int32_t cmp = 0;
	$var($TreeMap$Entry, parent, nullptr);
	$var($Comparator, cpr, this->comparator$);
	if (cpr != nullptr) {
		do {
			$assign(parent, t);
			cmp = cpr->compare(key, $nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				$var($Object, oldValue, $nc(t)->value);
				if (replaceOld || oldValue == nullptr) {
					$set(t, value, value);
				}
				return $of(oldValue);
			}
		} while (t != nullptr);
	} else {
		$Objects::requireNonNull(key);
		$var($Comparable, k, $cast($Comparable, key));
		do {
			$assign(parent, t);
			cmp = k->compareTo($nc(t)->key);
			if (cmp < 0) {
				$assign(t, $nc(t)->left);
			} else if (cmp > 0) {
				$assign(t, $nc(t)->right);
			} else {
				$var($Object, oldValue, $nc(t)->value);
				if (replaceOld || oldValue == nullptr) {
					$set(t, value, value);
				}
				return $of(oldValue);
			}
		} while (t != nullptr);
	}
	addEntry(key, value, parent, cmp < 0);
	return $of(nullptr);
}

$Object* TreeMap::remapValue($TreeMap$Entry* t, Object$* key, $BiFunction* remappingFunction) {
	$var($Object, newValue, callRemappingFunctionWithCheck(key, $nc(t)->value, remappingFunction));
	if (newValue == nullptr) {
		deleteEntry(t);
		return $of(nullptr);
	} else {
		$set($nc(t), value, newValue);
		return $of(newValue);
	}
}

$Object* TreeMap::mergeValue($TreeMap$Entry* t, Object$* value, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, $nc(t)->value);
	$var($Object, newValue, nullptr);
	if (t->value == nullptr) {
		$assign(newValue, value);
	} else {
		int32_t mc = this->modCount;
		$assign(newValue, $nc(remappingFunction)->apply(oldValue, value));
		if (mc != this->modCount) {
			$throwNew($ConcurrentModificationException);
		}
	}
	if (newValue == nullptr) {
		deleteEntry(t);
		return $of(nullptr);
	} else {
		$set(t, value, newValue);
		return $of(newValue);
	}
}

$Object* TreeMap::remove(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, getEntry(key));
	if (p == nullptr) {
		return $of(nullptr);
	}
	$var($Object, oldValue, $nc(p)->value);
	deleteEntry(p);
	return $of(oldValue);
}

void TreeMap::clear() {
	++this->modCount;
	this->size$ = 0;
	$set(this, root, nullptr);
}

$Object* TreeMap::clone() {
	$useLocalCurrentObjectStackCache();
	$var(TreeMap, clone, nullptr);
	try {
		$assign(clone, $cast(TreeMap, $AbstractMap::clone()));
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$set($nc(clone), root, nullptr);
	clone->size$ = 0;
	clone->modCount = 0;
	$set(clone, entrySet$, nullptr);
	$set(clone, navigableKeySet$, nullptr);
	$set(clone, descendingMap$, nullptr);
	try {
		clone->buildFromSorted(this->size$, $($nc($(entrySet()))->iterator()), nullptr, nullptr);
	} catch ($IOException& cannotHappen) {
	} catch ($ClassNotFoundException& cannotHappen) {
	}
	return $of(clone);
}

$Map$Entry* TreeMap::firstEntry() {
	return exportEntry($(getFirstEntry()));
}

$Map$Entry* TreeMap::lastEntry() {
	return exportEntry($(getLastEntry()));
}

$Map$Entry* TreeMap::pollFirstEntry() {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, getFirstEntry());
	$var($Map$Entry, result, exportEntry(p));
	if (p != nullptr) {
		deleteEntry(p);
	}
	return result;
}

$Map$Entry* TreeMap::pollLastEntry() {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, getLastEntry());
	$var($Map$Entry, result, exportEntry(p));
	if (p != nullptr) {
		deleteEntry(p);
	}
	return result;
}

$Map$Entry* TreeMap::lowerEntry(Object$* key) {
	return exportEntry($(getLowerEntry(key)));
}

$Object* TreeMap::lowerKey(Object$* key) {
	return $of(keyOrNull($(getLowerEntry(key))));
}

$Map$Entry* TreeMap::floorEntry(Object$* key) {
	return exportEntry($(getFloorEntry(key)));
}

$Object* TreeMap::floorKey(Object$* key) {
	return $of(keyOrNull($(getFloorEntry(key))));
}

$Map$Entry* TreeMap::ceilingEntry(Object$* key) {
	return exportEntry($(getCeilingEntry(key)));
}

$Object* TreeMap::ceilingKey(Object$* key) {
	return $of(keyOrNull($(getCeilingEntry(key))));
}

$Map$Entry* TreeMap::higherEntry(Object$* key) {
	return exportEntry($(getHigherEntry(key)));
}

$Object* TreeMap::higherKey(Object$* key) {
	return $of(keyOrNull($(getHigherEntry(key))));
}

$Set* TreeMap::keySet() {
	return navigableKeySet();
}

$NavigableSet* TreeMap::navigableKeySet() {
	$var($TreeMap$KeySet, nks, this->navigableKeySet$);
	return (nks != nullptr) ? static_cast<$NavigableSet*>(nks) : (static_cast<$NavigableSet*>(($set(this, navigableKeySet$, $new($TreeMap$KeySet, this)))));
}

$NavigableSet* TreeMap::descendingKeySet() {
	return $nc($(descendingMap()))->navigableKeySet();
}

$Collection* TreeMap::values() {
	$var($Collection, vs, this->$AbstractMap::values$);
	if (vs == nullptr) {
		$assign(vs, $new($TreeMap$Values, this));
		$set(this, values$, vs);
	}
	return vs;
}

$Set* TreeMap::entrySet() {
	$var($TreeMap$EntrySet, es, this->entrySet$);
	return (es != nullptr) ? static_cast<$Set*>(es) : (static_cast<$Set*>(($set(this, entrySet$, $new($TreeMap$EntrySet, this)))));
}

$NavigableMap* TreeMap::descendingMap() {
	$var($NavigableMap, km, this->descendingMap$);
	return (km != nullptr) ? km : ($set(this, descendingMap$, $new($TreeMap$DescendingSubMap, this, true, nullptr, true, true, nullptr, true)));
}

$NavigableMap* TreeMap::subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) {
	return $new($TreeMap$AscendingSubMap, this, false, fromKey, fromInclusive, false, toKey, toInclusive);
}

$NavigableMap* TreeMap::headMap(Object$* toKey, bool inclusive) {
	return $new($TreeMap$AscendingSubMap, this, true, nullptr, true, false, toKey, inclusive);
}

$NavigableMap* TreeMap::tailMap(Object$* fromKey, bool inclusive) {
	return $new($TreeMap$AscendingSubMap, this, false, fromKey, inclusive, true, nullptr, true);
}

$SortedMap* TreeMap::subMap(Object$* fromKey, Object$* toKey) {
	return subMap(fromKey, true, toKey, false);
}

$SortedMap* TreeMap::headMap(Object$* toKey) {
	return headMap(toKey, false);
}

$SortedMap* TreeMap::tailMap(Object$* fromKey) {
	return tailMap(fromKey, true);
}

bool TreeMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$var($TreeMap$Entry, p, getEntry(key));
	if (p != nullptr && $Objects::equals(oldValue, p->value)) {
		$set(p, value, newValue);
		return true;
	}
	return false;
}

$Object* TreeMap::replace(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, getEntry(key));
	if (p != nullptr) {
		$var($Object, oldValue, p->value);
		$set(p, value, value);
		return $of(oldValue);
	}
	return $of(nullptr);
}

void TreeMap::forEach($BiConsumer* action) {
	$Objects::requireNonNull(action);
	int32_t expectedModCount = this->modCount;
	{
		$var($TreeMap$Entry, e, getFirstEntry());
		for (; e != nullptr; $assign(e, successor(e))) {
			action->accept($nc(e)->key, e->value);
			if (expectedModCount != this->modCount) {
				$throwNew($ConcurrentModificationException);
			}
		}
	}
}

void TreeMap::replaceAll($BiFunction* function) {
	$Objects::requireNonNull(function);
	int32_t expectedModCount = this->modCount;
	{
		$var($TreeMap$Entry, e, getFirstEntry());
		for (; e != nullptr; $assign(e, successor(e))) {
			$set($nc(e), value, function->apply(e->key, e->value));
			if (expectedModCount != this->modCount) {
				$throwNew($ConcurrentModificationException);
			}
		}
	}
}

$Iterator* TreeMap::keyIterator() {
	return $new($TreeMap$KeyIterator, this, $(getFirstEntry()));
}

$Iterator* TreeMap::descendingKeyIterator() {
	return $new($TreeMap$DescendingKeyIterator, this, $(getLastEntry()));
}

int32_t TreeMap::compare(Object$* k1, Object$* k2) {
	return this->comparator$ == nullptr ? $nc(($cast($Comparable, k1)))->compareTo(k2) : $nc(this->comparator$)->compare(k1, k2);
}

bool TreeMap::valEquals(Object$* o1, Object$* o2) {
	$init(TreeMap);
	return (o1 == nullptr ? o2 == nullptr : $nc($of(o1))->equals(o2));
}

$Map$Entry* TreeMap::exportEntry($TreeMap$Entry* e) {
	$init(TreeMap);
	return (e == nullptr) ? ($Map$Entry*)nullptr : static_cast<$Map$Entry*>($new($AbstractMap$SimpleImmutableEntry, e));
}

$Object* TreeMap::keyOrNull($TreeMap$Entry* e) {
	$init(TreeMap);
	return $of((e == nullptr) ? ($Object*)nullptr : $nc(e)->key);
}

$Object* TreeMap::key($TreeMap$Entry* e) {
	$init(TreeMap);
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc(e)->key);
}

$TreeMap$Entry* TreeMap::getFirstEntry() {
	$var($TreeMap$Entry, p, this->root);
	if (p != nullptr) {
		while (p->left != nullptr) {
			$assign(p, p->left);
		}
	}
	return p;
}

$TreeMap$Entry* TreeMap::getLastEntry() {
	$var($TreeMap$Entry, p, this->root);
	if (p != nullptr) {
		while (p->right != nullptr) {
			$assign(p, p->right);
		}
	}
	return p;
}

$TreeMap$Entry* TreeMap::successor($TreeMap$Entry* t) {
	$init(TreeMap);
	$useLocalCurrentObjectStackCache();
	if (t == nullptr) {
		return nullptr;
	} else if ($nc(t)->right != nullptr) {
		$var($TreeMap$Entry, p, t->right);
		while ($nc(p)->left != nullptr) {
			$assign(p, p->left);
		}
		return p;
	} else {
		$var($TreeMap$Entry, p, t->parent);
		$var($TreeMap$Entry, ch, t);
		while (p != nullptr && ch == p->right) {
			$assign(ch, p);
			$assign(p, p->parent);
		}
		return p;
	}
}

$TreeMap$Entry* TreeMap::predecessor($TreeMap$Entry* t) {
	$init(TreeMap);
	$useLocalCurrentObjectStackCache();
	if (t == nullptr) {
		return nullptr;
	} else if ($nc(t)->left != nullptr) {
		$var($TreeMap$Entry, p, t->left);
		while ($nc(p)->right != nullptr) {
			$assign(p, p->right);
		}
		return p;
	} else {
		$var($TreeMap$Entry, p, t->parent);
		$var($TreeMap$Entry, ch, t);
		while (p != nullptr && ch == p->left) {
			$assign(ch, p);
			$assign(p, p->parent);
		}
		return p;
	}
}

bool TreeMap::colorOf($TreeMap$Entry* p) {
	$init(TreeMap);
	return (p == nullptr ? TreeMap::BLACK : $nc(p)->color);
}

$TreeMap$Entry* TreeMap::parentOf($TreeMap$Entry* p) {
	$init(TreeMap);
	return (p == nullptr ? ($TreeMap$Entry*)nullptr : $nc(p)->parent);
}

void TreeMap::setColor($TreeMap$Entry* p, bool c) {
	$init(TreeMap);
	if (p != nullptr) {
		p->color = c;
	}
}

$TreeMap$Entry* TreeMap::leftOf($TreeMap$Entry* p) {
	$init(TreeMap);
	return (p == nullptr) ? ($TreeMap$Entry*)nullptr : $nc(p)->left;
}

$TreeMap$Entry* TreeMap::rightOf($TreeMap$Entry* p) {
	$init(TreeMap);
	return (p == nullptr) ? ($TreeMap$Entry*)nullptr : $nc(p)->right;
}

void TreeMap::rotateLeft($TreeMap$Entry* p) {
	if (p != nullptr) {
		$var($TreeMap$Entry, r, p->right);
		$set(p, right, $nc(r)->left);
		if (r->left != nullptr) {
			$set($nc(r->left), parent, p);
		}
		$set(r, parent, p->parent);
		if (p->parent == nullptr) {
			$set(this, root, r);
		} else if ($nc(p->parent)->left == p) {
			$set($nc(p->parent), left, r);
		} else {
			$set($nc(p->parent), right, r);
		}
		$set(r, left, p);
		$set(p, parent, r);
	}
}

void TreeMap::rotateRight($TreeMap$Entry* p) {
	if (p != nullptr) {
		$var($TreeMap$Entry, l, p->left);
		$set(p, left, $nc(l)->right);
		if (l->right != nullptr) {
			$set($nc(l->right), parent, p);
		}
		$set(l, parent, p->parent);
		if (p->parent == nullptr) {
			$set(this, root, l);
		} else if ($nc(p->parent)->right == p) {
			$set($nc(p->parent), right, l);
		} else {
			$set($nc(p->parent), left, l);
		}
		$set(l, right, p);
		$set(p, parent, l);
	}
}

void TreeMap::fixAfterInsertion($TreeMap$Entry* x$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, x, x$renamed);
	$nc(x)->color = TreeMap::RED;
	while (x != nullptr && x != this->root && $nc(x->parent)->color == TreeMap::RED) {
		if (parentOf(x) == leftOf($(parentOf($(parentOf(x)))))) {
			$var($TreeMap$Entry, y, rightOf($(parentOf($(parentOf(x))))));
			if (colorOf(y) == TreeMap::RED) {
				setColor($(parentOf(x)), TreeMap::BLACK);
				setColor(y, TreeMap::BLACK);
				setColor($(parentOf($(parentOf(x)))), TreeMap::RED);
				$assign(x, parentOf($(parentOf(x))));
			} else {
				if (x == rightOf($(parentOf(x)))) {
					$assign(x, parentOf(x));
					rotateLeft(x);
				}
				setColor($(parentOf(x)), TreeMap::BLACK);
				setColor($(parentOf($(parentOf(x)))), TreeMap::RED);
				rotateRight($(parentOf($(parentOf(x)))));
			}
		} else {
			$var($TreeMap$Entry, y, leftOf($(parentOf($(parentOf(x))))));
			if (colorOf(y) == TreeMap::RED) {
				setColor($(parentOf(x)), TreeMap::BLACK);
				setColor(y, TreeMap::BLACK);
				setColor($(parentOf($(parentOf(x)))), TreeMap::RED);
				$assign(x, parentOf($(parentOf(x))));
			} else {
				if (x == leftOf($(parentOf(x)))) {
					$assign(x, parentOf(x));
					rotateRight(x);
				}
				setColor($(parentOf(x)), TreeMap::BLACK);
				setColor($(parentOf($(parentOf(x)))), TreeMap::RED);
				rotateLeft($(parentOf($(parentOf(x)))));
			}
		}
	}
	$nc(this->root)->color = TreeMap::BLACK;
}

void TreeMap::deleteEntry($TreeMap$Entry* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, p, p$renamed);
	++this->modCount;
	--this->size$;
	if ($nc(p)->left != nullptr && p->right != nullptr) {
		$var($TreeMap$Entry, s, successor(p));
		$set(p, key, $nc(s)->key);
		$set(p, value, s->value);
		$assign(p, s);
	}
	$var($TreeMap$Entry, replacement, $nc(p)->left != nullptr ? $nc(p)->left : p->right);
	if (replacement != nullptr) {
		$set(replacement, parent, p->parent);
		if (p->parent == nullptr) {
			$set(this, root, replacement);
		} else if (p == $nc(p->parent)->left) {
			$set($nc(p->parent), left, replacement);
		} else {
			$set($nc(p->parent), right, replacement);
		}
		$set(p, left, ($set(p, right, ($set(p, parent, nullptr)))));
		if (p->color == TreeMap::BLACK) {
			fixAfterDeletion(replacement);
		}
	} else if (p->parent == nullptr) {
		$set(this, root, nullptr);
	} else {
		if (p->color == TreeMap::BLACK) {
			fixAfterDeletion(p);
		}
		if (p->parent != nullptr) {
			if (p == $nc(p->parent)->left) {
				$set($nc(p->parent), left, nullptr);
			} else if (p == $nc(p->parent)->right) {
				$set($nc(p->parent), right, nullptr);
			}
			$set(p, parent, nullptr);
		}
	}
}

void TreeMap::fixAfterDeletion($TreeMap$Entry* x$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap$Entry, x, x$renamed);
	while (x != this->root && colorOf(x) == TreeMap::BLACK) {
		if (x == leftOf($(parentOf(x)))) {
			$var($TreeMap$Entry, sib, rightOf($(parentOf(x))));
			if (colorOf(sib) == TreeMap::RED) {
				setColor(sib, TreeMap::BLACK);
				setColor($(parentOf(x)), TreeMap::RED);
				rotateLeft($(parentOf(x)));
				$assign(sib, rightOf($(parentOf(x))));
			}
			bool var$0 = colorOf($(leftOf(sib))) == TreeMap::BLACK;
			if (var$0 && colorOf($(rightOf(sib))) == TreeMap::BLACK) {
				setColor(sib, TreeMap::RED);
				$assign(x, parentOf(x));
			} else {
				if (colorOf($(rightOf(sib))) == TreeMap::BLACK) {
					setColor($(leftOf(sib)), TreeMap::BLACK);
					setColor(sib, TreeMap::RED);
					rotateRight(sib);
					$assign(sib, rightOf($(parentOf(x))));
				}
				setColor(sib, colorOf($(parentOf(x))));
				setColor($(parentOf(x)), TreeMap::BLACK);
				setColor($(rightOf(sib)), TreeMap::BLACK);
				rotateLeft($(parentOf(x)));
				$assign(x, this->root);
			}
		} else {
			$var($TreeMap$Entry, sib, leftOf($(parentOf(x))));
			if (colorOf(sib) == TreeMap::RED) {
				setColor(sib, TreeMap::BLACK);
				setColor($(parentOf(x)), TreeMap::RED);
				rotateRight($(parentOf(x)));
				$assign(sib, leftOf($(parentOf(x))));
			}
			bool var$1 = colorOf($(rightOf(sib))) == TreeMap::BLACK;
			if (var$1 && colorOf($(leftOf(sib))) == TreeMap::BLACK) {
				setColor(sib, TreeMap::RED);
				$assign(x, parentOf(x));
			} else {
				if (colorOf($(leftOf(sib))) == TreeMap::BLACK) {
					setColor($(rightOf(sib)), TreeMap::BLACK);
					setColor(sib, TreeMap::RED);
					rotateLeft(sib);
					$assign(sib, leftOf($(parentOf(x))));
				}
				setColor(sib, colorOf($(parentOf(x))));
				setColor($(parentOf(x)), TreeMap::BLACK);
				setColor($(leftOf(sib)), TreeMap::BLACK);
				rotateRight($(parentOf(x)));
				$assign(x, this->root);
			}
		}
	}
	setColor(x, TreeMap::BLACK);
}

void TreeMap::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	s->writeInt(this->size$);
	{
		$var($Iterator, i$, $nc($(entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				s->writeObject($($nc(e)->getKey()));
				s->writeObject($($nc(e)->getValue()));
			}
		}
	}
}

void TreeMap::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	int32_t size = s->readInt();
	buildFromSorted(size, nullptr, s, nullptr);
}

void TreeMap::readTreeSet(int32_t size, $ObjectInputStream* s, Object$* defaultVal) {
	buildFromSorted(size, nullptr, s, defaultVal);
}

void TreeMap::addAllForTreeSet($SortedSet* set, Object$* defaultVal) {
	try {
		int32_t var$0 = $nc(set)->size();
		buildFromSorted(var$0, $(set->iterator()), nullptr, defaultVal);
	} catch ($IOException& cannotHappen) {
	} catch ($ClassNotFoundException& cannotHappen) {
	}
}

void TreeMap::buildFromSorted(int32_t size, $Iterator* it, $ObjectInputStream* str, Object$* defaultVal) {
	this->size$ = size;
	$set(this, root, buildFromSorted(0, 0, size - 1, computeRedLevel(size), it, str, defaultVal));
}

$TreeMap$Entry* TreeMap::buildFromSorted(int32_t level, int32_t lo, int32_t hi, int32_t redLevel, $Iterator* it, $ObjectInputStream* str, Object$* defaultVal) {
	$useLocalCurrentObjectStackCache();
	if (hi < lo) {
		return nullptr;
	}
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	$var($TreeMap$Entry, left, nullptr);
	if (lo < mid) {
		$assign(left, buildFromSorted(level + 1, lo, mid - 1, redLevel, it, str, defaultVal));
	}
	$var($Object, key, nullptr);
	$var($Object, value, nullptr);
	if (it != nullptr) {
		if (defaultVal == nullptr) {
			$var($Map$Entry, entry, $cast($Map$Entry, it->next()));
			$assign(key, $nc(entry)->getKey());
			$assign(value, entry->getValue());
		} else {
			$assign(key, it->next());
			$assign(value, defaultVal);
		}
	} else {
		$assign(key, $nc(str)->readObject());
		$assign(value, defaultVal != nullptr ? $of(defaultVal) : str->readObject());
	}
	$var($TreeMap$Entry, middle, $new($TreeMap$Entry, key, value, nullptr));
	if (level == redLevel) {
		middle->color = TreeMap::RED;
	}
	if (left != nullptr) {
		$set(middle, left, left);
		$set(left, parent, middle);
	}
	if (mid < hi) {
		$var($TreeMap$Entry, right, buildFromSorted(level + 1, mid + 1, hi, redLevel, it, str, defaultVal));
		$set(middle, right, right);
		$set($nc(right), parent, middle);
	}
	return middle;
}

int32_t TreeMap::computeRedLevel(int32_t size) {
	$init(TreeMap);
	return 31 - $Integer::numberOfLeadingZeros(size + 1);
}

$Spliterator* TreeMap::keySpliteratorFor($NavigableMap* m) {
	$init(TreeMap);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(TreeMap, m)) {
		$var(TreeMap, t, $cast(TreeMap, m));
		return $nc(t)->keySpliterator();
	}
	if ($instanceOf($TreeMap$DescendingSubMap, m)) {
		$var($TreeMap$DescendingSubMap, dm, $cast($TreeMap$DescendingSubMap, m));
		$var(TreeMap, tm, $nc(dm)->m);
		if ($equals(dm, $nc(tm)->descendingMap$)) {
			$var(TreeMap, t, tm);
			return t->descendingKeySpliterator();
		}
	}
	$var($TreeMap$NavigableSubMap, sm, $cast($TreeMap$NavigableSubMap, m));
	return $nc(sm)->keySpliterator();
}

$Spliterator* TreeMap::keySpliterator() {
	return $new($TreeMap$KeySpliterator, this, nullptr, nullptr, 0, -1, 0);
}

$Spliterator* TreeMap::descendingKeySpliterator() {
	return $new($TreeMap$DescendingKeySpliterator, this, nullptr, nullptr, 0, -2, 0);
}

void clinit$TreeMap($Class* class$) {
	$assignStatic(TreeMap::UNBOUNDED, $new($Object));
}

TreeMap::TreeMap() {
}

$Class* TreeMap::load$($String* name, bool initialize) {
	$loadClass(TreeMap, name, initialize, &_TreeMap_ClassInfo_, clinit$TreeMap, allocate$TreeMap);
	return class$;
}

$Class* TreeMap::class$ = nullptr;

	} // util
} // java