#include <java/util/concurrent/ConcurrentHashMap.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/Double.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap$BulkTask.h>
#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>
#include <java/util/concurrent/ConcurrentHashMap$CounterCell.h>
#include <java/util/concurrent/ConcurrentHashMap$EntrySetView.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachEntryTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachKeyTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachMappingTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachTransformedEntryTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachTransformedKeyTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachTransformedMappingTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachTransformedValueTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForEachValueTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ForwardingNode.h>
#include <java/util/concurrent/ConcurrentHashMap$KeyIterator.h>
#include <java/util/concurrent/ConcurrentHashMap$KeySetView.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceEntriesTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToDoubleTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToIntTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceEntriesToLongTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceKeysTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceKeysToDoubleTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceKeysToIntTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceKeysToLongTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsToDoubleTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsToIntTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceMappingsToLongTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceValuesTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceValuesToDoubleTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceValuesToIntTask.h>
#include <java/util/concurrent/ConcurrentHashMap$MapReduceValuesToLongTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$ReduceEntriesTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ReduceKeysTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ReduceValuesTask.h>
#include <java/util/concurrent/ConcurrentHashMap$ReservationNode.h>
#include <java/util/concurrent/ConcurrentHashMap$SearchEntriesTask.h>
#include <java/util/concurrent/ConcurrentHashMap$SearchKeysTask.h>
#include <java/util/concurrent/ConcurrentHashMap$SearchMappingsTask.h>
#include <java/util/concurrent/ConcurrentHashMap$SearchValuesTask.h>
#include <java/util/concurrent/ConcurrentHashMap$Segment.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeBin.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeNode.h>
#include <java/util/concurrent/ConcurrentHashMap$ValueIterator.h>
#include <java/util/concurrent/ConcurrentHashMap$ValuesView.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/ThreadLocalRandom.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/ToDoubleBiFunction.h>
#include <java/util/function/ToDoubleFunction.h>
#include <java/util/function/ToIntBiFunction.h>
#include <java/util/function/ToIntFunction.h>
#include <java/util/function/ToLongBiFunction.h>
#include <java/util/function/ToLongFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ABASE
#undef ASHIFT
#undef BASECOUNT
#undef CELLSBUSY
#undef CELLVALUE
#undef DEFAULT_CAPACITY
#undef DEFAULT_CONCURRENCY_LEVEL
#undef HASH_BITS
#undef LOAD_FACTOR
#undef MAXIMUM_CAPACITY
#undef MAX_ARRAY_SIZE
#undef MAX_RESIZERS
#undef MAX_VALUE
#undef MIN_TRANSFER_STRIDE
#undef MIN_TREEIFY_CAPACITY
#undef MOVED
#undef NCPU
#undef RESERVED
#undef RESIZE_STAMP_BITS
#undef RESIZE_STAMP_SHIFT
#undef SIZECTL
#undef TRANSFERINDEX
#undef TREEBIN
#undef TREEIFY_THRESHOLD
#undef TRUE
#undef TYPE
#undef U
#undef UNTREEIFY_THRESHOLD

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ConcurrentHashMap$CounterCellArray = $Array<::java::util::concurrent::ConcurrentHashMap$CounterCell>;
using $ConcurrentHashMap$NodeArray = $Array<::java::util::concurrent::ConcurrentHashMap$Node>;
using $ConcurrentHashMap$SegmentArray = $Array<::java::util::concurrent::ConcurrentHashMap$Segment>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Double = ::java::lang::Double;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ConcurrentHashMap$BulkTask = ::java::util::concurrent::ConcurrentHashMap$BulkTask;
using $ConcurrentHashMap$CollectionView = ::java::util::concurrent::ConcurrentHashMap$CollectionView;
using $ConcurrentHashMap$CounterCell = ::java::util::concurrent::ConcurrentHashMap$CounterCell;
using $ConcurrentHashMap$EntrySetView = ::java::util::concurrent::ConcurrentHashMap$EntrySetView;
using $ConcurrentHashMap$ForEachEntryTask = ::java::util::concurrent::ConcurrentHashMap$ForEachEntryTask;
using $ConcurrentHashMap$ForEachKeyTask = ::java::util::concurrent::ConcurrentHashMap$ForEachKeyTask;
using $ConcurrentHashMap$ForEachMappingTask = ::java::util::concurrent::ConcurrentHashMap$ForEachMappingTask;
using $ConcurrentHashMap$ForEachTransformedEntryTask = ::java::util::concurrent::ConcurrentHashMap$ForEachTransformedEntryTask;
using $ConcurrentHashMap$ForEachTransformedKeyTask = ::java::util::concurrent::ConcurrentHashMap$ForEachTransformedKeyTask;
using $ConcurrentHashMap$ForEachTransformedMappingTask = ::java::util::concurrent::ConcurrentHashMap$ForEachTransformedMappingTask;
using $ConcurrentHashMap$ForEachTransformedValueTask = ::java::util::concurrent::ConcurrentHashMap$ForEachTransformedValueTask;
using $ConcurrentHashMap$ForEachValueTask = ::java::util::concurrent::ConcurrentHashMap$ForEachValueTask;
using $ConcurrentHashMap$ForwardingNode = ::java::util::concurrent::ConcurrentHashMap$ForwardingNode;
using $ConcurrentHashMap$KeyIterator = ::java::util::concurrent::ConcurrentHashMap$KeyIterator;
using $ConcurrentHashMap$KeySetView = ::java::util::concurrent::ConcurrentHashMap$KeySetView;
using $ConcurrentHashMap$MapReduceEntriesTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesTask;
using $ConcurrentHashMap$MapReduceEntriesToDoubleTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesToDoubleTask;
using $ConcurrentHashMap$MapReduceEntriesToIntTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesToIntTask;
using $ConcurrentHashMap$MapReduceEntriesToLongTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceEntriesToLongTask;
using $ConcurrentHashMap$MapReduceKeysTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceKeysTask;
using $ConcurrentHashMap$MapReduceKeysToDoubleTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceKeysToDoubleTask;
using $ConcurrentHashMap$MapReduceKeysToIntTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceKeysToIntTask;
using $ConcurrentHashMap$MapReduceKeysToLongTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceKeysToLongTask;
using $ConcurrentHashMap$MapReduceMappingsTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsTask;
using $ConcurrentHashMap$MapReduceMappingsToDoubleTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsToDoubleTask;
using $ConcurrentHashMap$MapReduceMappingsToIntTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsToIntTask;
using $ConcurrentHashMap$MapReduceMappingsToLongTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceMappingsToLongTask;
using $ConcurrentHashMap$MapReduceValuesTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceValuesTask;
using $ConcurrentHashMap$MapReduceValuesToDoubleTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToDoubleTask;
using $ConcurrentHashMap$MapReduceValuesToIntTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToIntTask;
using $ConcurrentHashMap$MapReduceValuesToLongTask = ::java::util::concurrent::ConcurrentHashMap$MapReduceValuesToLongTask;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$ReduceEntriesTask = ::java::util::concurrent::ConcurrentHashMap$ReduceEntriesTask;
using $ConcurrentHashMap$ReduceKeysTask = ::java::util::concurrent::ConcurrentHashMap$ReduceKeysTask;
using $ConcurrentHashMap$ReduceValuesTask = ::java::util::concurrent::ConcurrentHashMap$ReduceValuesTask;
using $ConcurrentHashMap$ReservationNode = ::java::util::concurrent::ConcurrentHashMap$ReservationNode;
using $ConcurrentHashMap$SearchEntriesTask = ::java::util::concurrent::ConcurrentHashMap$SearchEntriesTask;
using $ConcurrentHashMap$SearchKeysTask = ::java::util::concurrent::ConcurrentHashMap$SearchKeysTask;
using $ConcurrentHashMap$SearchMappingsTask = ::java::util::concurrent::ConcurrentHashMap$SearchMappingsTask;
using $ConcurrentHashMap$SearchValuesTask = ::java::util::concurrent::ConcurrentHashMap$SearchValuesTask;
using $ConcurrentHashMap$Segment = ::java::util::concurrent::ConcurrentHashMap$Segment;
using $ConcurrentHashMap$Traverser = ::java::util::concurrent::ConcurrentHashMap$Traverser;
using $ConcurrentHashMap$TreeBin = ::java::util::concurrent::ConcurrentHashMap$TreeBin;
using $ConcurrentHashMap$TreeNode = ::java::util::concurrent::ConcurrentHashMap$TreeNode;
using $ConcurrentHashMap$ValueIterator = ::java::util::concurrent::ConcurrentHashMap$ValueIterator;
using $ConcurrentHashMap$ValuesView = ::java::util::concurrent::ConcurrentHashMap$ValuesView;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $ThreadLocalRandom = ::java::util::concurrent::ThreadLocalRandom;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Consumer = ::java::util::function::Consumer;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $Function = ::java::util::function::Function;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $Predicate = ::java::util::function::Predicate;
using $ToDoubleBiFunction = ::java::util::function::ToDoubleBiFunction;
using $ToDoubleFunction = ::java::util::function::ToDoubleFunction;
using $ToIntBiFunction = ::java::util::function::ToIntBiFunction;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $ToLongBiFunction = ::java::util::function::ToLongBiFunction;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, serialVersionUID)},
	{"MAXIMUM_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, MAXIMUM_CAPACITY)},
	{"DEFAULT_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, DEFAULT_CAPACITY)},
	{"MAX_ARRAY_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, MAX_ARRAY_SIZE)},
	{"DEFAULT_CONCURRENCY_LEVEL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, DEFAULT_CONCURRENCY_LEVEL)},
	{"LOAD_FACTOR", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, LOAD_FACTOR)},
	{"TREEIFY_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, TREEIFY_THRESHOLD)},
	{"UNTREEIFY_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, UNTREEIFY_THRESHOLD)},
	{"MIN_TREEIFY_CAPACITY", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, MIN_TREEIFY_CAPACITY)},
	{"MIN_TRANSFER_STRIDE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, MIN_TRANSFER_STRIDE)},
	{"RESIZE_STAMP_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, RESIZE_STAMP_BITS)},
	{"MAX_RESIZERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, MAX_RESIZERS)},
	{"RESIZE_STAMP_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap, RESIZE_STAMP_SHIFT)},
	{"MOVED", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, MOVED)},
	{"TREEBIN", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, TREEBIN)},
	{"RESERVED", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, RESERVED)},
	{"HASH_BITS", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap, HASH_BITS)},
	{"NCPU", "I", nullptr, $STATIC | $FINAL, $staticField(ConcurrentHashMap, NCPU)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, serialPersistentFields)},
	{"table", "[Ljava/util/concurrent/ConcurrentHashMap$Node;", "[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, table)},
	{"nextTable", "[Ljava/util/concurrent/ConcurrentHashMap$Node;", "[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, nextTable)},
	{"baseCount", "J", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, baseCount)},
	{"sizeCtl", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, sizeCtl)},
	{"transferIndex", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, transferIndex)},
	{"cellsBusy", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, cellsBusy)},
	{"counterCells", "[Ljava/util/concurrent/ConcurrentHashMap$CounterCell;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentHashMap, counterCells)},
	{"keySet", "Ljava/util/concurrent/ConcurrentHashMap$KeySetView;", "Ljava/util/concurrent/ConcurrentHashMap$KeySetView<TK;TV;>;", $PRIVATE | $TRANSIENT, $field(ConcurrentHashMap, keySet$)},
	{"values", "Ljava/util/concurrent/ConcurrentHashMap$ValuesView;", "Ljava/util/concurrent/ConcurrentHashMap$ValuesView<TK;TV;>;", $PRIVATE | $TRANSIENT, $field(ConcurrentHashMap, values$)},
	{"entrySet", "Ljava/util/concurrent/ConcurrentHashMap$EntrySetView;", "Ljava/util/concurrent/ConcurrentHashMap$EntrySetView<TK;TV;>;", $PRIVATE | $TRANSIENT, $field(ConcurrentHashMap, entrySet$)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, U)},
	{"SIZECTL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, SIZECTL)},
	{"TRANSFERINDEX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, TRANSFERINDEX)},
	{"BASECOUNT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, BASECOUNT)},
	{"CELLSBUSY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, CELLSBUSY)},
	{"CELLVALUE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, CELLVALUE)},
	{"ABASE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, ABASE)},
	{"ASHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap, ASHIFT)},
	{}
};

$MethodInfo _ConcurrentHashMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentHashMap::*)()>(&ConcurrentHashMap::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentHashMap::*)(int32_t)>(&ConcurrentHashMap::init$))},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC, $method(static_cast<void(ConcurrentHashMap::*)($Map*)>(&ConcurrentHashMap::init$))},
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentHashMap::*)(int32_t,float)>(&ConcurrentHashMap::init$))},
	{"<init>", "(IFI)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentHashMap::*)(int32_t,float,int32_t)>(&ConcurrentHashMap::init$))},
	{"addCount", "(JI)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap::*)(int64_t,int32_t)>(&ConcurrentHashMap::addCount))},
	{"batchFor", "(J)I", nullptr, $FINAL, $method(static_cast<int32_t(ConcurrentHashMap::*)(int64_t)>(&ConcurrentHashMap::batchFor))},
	{"casTabAt", "([Ljava/util/concurrent/ConcurrentHashMap$Node;ILjava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$Node;)Z", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;ILjava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)Z", $STATIC | $FINAL, $method(static_cast<bool(*)($ConcurrentHashMap$NodeArray*,int32_t,$ConcurrentHashMap$Node*,$ConcurrentHashMap$Node*)>(&ConcurrentHashMap::casTabAt))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"comparableClassFor", "(Ljava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/Object;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)(Object$*)>(&ConcurrentHashMap::comparableClassFor))},
	{"compareComparables", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;)I", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;)I", $STATIC, $method(static_cast<int32_t(*)($Class*,Object$*,Object$*)>(&ConcurrentHashMap::compareComparables))},
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TV;>;", $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/BiConsumer;)V", "(Ljava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"forEach", "(JLjava/util/function/BiConsumer;)V", "(JLjava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"forEach", "(JLjava/util/function/BiFunction;Ljava/util/function/Consumer;)V", "<U:Ljava/lang/Object;>(JLjava/util/function/BiFunction<-TK;-TV;+TU;>;Ljava/util/function/Consumer<-TU;>;)V", $PUBLIC},
	{"forEachEntry", "(JLjava/util/function/Consumer;)V", "(JLjava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"forEachEntry", "(JLjava/util/function/Function;Ljava/util/function/Consumer;)V", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<Ljava/util/Map$Entry<TK;TV;>;+TU;>;Ljava/util/function/Consumer<-TU;>;)V", $PUBLIC},
	{"forEachKey", "(JLjava/util/function/Consumer;)V", "(JLjava/util/function/Consumer<-TK;>;)V", $PUBLIC},
	{"forEachKey", "(JLjava/util/function/Function;Ljava/util/function/Consumer;)V", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<-TK;+TU;>;Ljava/util/function/Consumer<-TU;>;)V", $PUBLIC},
	{"forEachValue", "(JLjava/util/function/Consumer;)V", "(JLjava/util/function/Consumer<-TV;>;)V", $PUBLIC},
	{"forEachValue", "(JLjava/util/function/Function;Ljava/util/function/Consumer;)V", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<-TV;+TU;>;Ljava/util/function/Consumer<-TU;>;)V", $PUBLIC},
	{"fullAddCount", "(JZ)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap::*)(int64_t,bool)>(&ConcurrentHashMap::fullAddCount))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;)TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"helpTransfer", "([Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$Node;)[Ljava/util/concurrent/ConcurrentHashMap$Node;", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $FINAL, $method(static_cast<$ConcurrentHashMap$NodeArray*(ConcurrentHashMap::*)($ConcurrentHashMap$NodeArray*,$ConcurrentHashMap$Node*)>(&ConcurrentHashMap::helpTransfer))},
	{"initTable", "()[Ljava/util/concurrent/ConcurrentHashMap$Node;", "()[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $PRIVATE | $FINAL, $method(static_cast<$ConcurrentHashMap$NodeArray*(ConcurrentHashMap::*)()>(&ConcurrentHashMap::initTable))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;", "()Ljava/util/concurrent/ConcurrentHashMap$KeySetView<TK;TV;>;", $PUBLIC},
	{"keySet", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;", "(TV;)Ljava/util/concurrent/ConcurrentHashMap$KeySetView<TK;TV;>;", $PUBLIC},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TK;>;", $PUBLIC},
	{"mappingCount", "()J", nullptr, $PUBLIC},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"newKeySet", "()Ljava/util/concurrent/ConcurrentHashMap$KeySetView;", "<K:Ljava/lang/Object;>()Ljava/util/concurrent/ConcurrentHashMap$KeySetView<TK;Ljava/lang/Boolean;>;", $PUBLIC | $STATIC, $method(static_cast<$ConcurrentHashMap$KeySetView*(*)()>(&ConcurrentHashMap::newKeySet))},
	{"newKeySet", "(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView;", "<K:Ljava/lang/Object;>(I)Ljava/util/concurrent/ConcurrentHashMap$KeySetView<TK;Ljava/lang/Boolean;>;", $PUBLIC | $STATIC, $method(static_cast<$ConcurrentHashMap$KeySetView*(*)(int32_t)>(&ConcurrentHashMap::newKeySet))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"putVal", "(Ljava/lang/Object;Ljava/lang/Object;Z)Ljava/lang/Object;", "(TK;TV;Z)TV;", $FINAL, $method(static_cast<$Object*(ConcurrentHashMap::*)(Object$*,Object$*,bool)>(&ConcurrentHashMap::putVal))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ConcurrentHashMap::*)($ObjectInputStream*)>(&ConcurrentHashMap::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"reduce", "(JLjava/util/function/BiFunction;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/BiFunction<-TK;-TV;+TU;>;Ljava/util/function/BiFunction<-TU;-TU;+TU;>;)TU;", $PUBLIC},
	{"reduceEntries", "(JLjava/util/function/BiFunction;)Ljava/util/Map$Entry;", "(JLjava/util/function/BiFunction<Ljava/util/Map$Entry<TK;TV;>;Ljava/util/Map$Entry<TK;TV;>;+Ljava/util/Map$Entry<TK;TV;>;>;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{"reduceEntries", "(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<Ljava/util/Map$Entry<TK;TV;>;+TU;>;Ljava/util/function/BiFunction<-TU;-TU;+TU;>;)TU;", $PUBLIC},
	{"reduceEntriesToDouble", "(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D", "(JLjava/util/function/ToDoubleFunction<Ljava/util/Map$Entry<TK;TV;>;>;DLjava/util/function/DoubleBinaryOperator;)D", $PUBLIC},
	{"reduceEntriesToInt", "(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I", "(JLjava/util/function/ToIntFunction<Ljava/util/Map$Entry<TK;TV;>;>;ILjava/util/function/IntBinaryOperator;)I", $PUBLIC},
	{"reduceEntriesToLong", "(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J", "(JLjava/util/function/ToLongFunction<Ljava/util/Map$Entry<TK;TV;>;>;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC},
	{"reduceKeys", "(JLjava/util/function/BiFunction;)Ljava/lang/Object;", "(JLjava/util/function/BiFunction<-TK;-TK;+TK;>;)TK;", $PUBLIC},
	{"reduceKeys", "(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<-TK;+TU;>;Ljava/util/function/BiFunction<-TU;-TU;+TU;>;)TU;", $PUBLIC},
	{"reduceKeysToDouble", "(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D", "(JLjava/util/function/ToDoubleFunction<-TK;>;DLjava/util/function/DoubleBinaryOperator;)D", $PUBLIC},
	{"reduceKeysToInt", "(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I", "(JLjava/util/function/ToIntFunction<-TK;>;ILjava/util/function/IntBinaryOperator;)I", $PUBLIC},
	{"reduceKeysToLong", "(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J", "(JLjava/util/function/ToLongFunction<-TK;>;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC},
	{"reduceToDouble", "(JLjava/util/function/ToDoubleBiFunction;DLjava/util/function/DoubleBinaryOperator;)D", "(JLjava/util/function/ToDoubleBiFunction<-TK;-TV;>;DLjava/util/function/DoubleBinaryOperator;)D", $PUBLIC},
	{"reduceToInt", "(JLjava/util/function/ToIntBiFunction;ILjava/util/function/IntBinaryOperator;)I", "(JLjava/util/function/ToIntBiFunction<-TK;-TV;>;ILjava/util/function/IntBinaryOperator;)I", $PUBLIC},
	{"reduceToLong", "(JLjava/util/function/ToLongBiFunction;JLjava/util/function/LongBinaryOperator;)J", "(JLjava/util/function/ToLongBiFunction<-TK;-TV;>;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC},
	{"reduceValues", "(JLjava/util/function/BiFunction;)Ljava/lang/Object;", "(JLjava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"reduceValues", "(JLjava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<-TV;+TU;>;Ljava/util/function/BiFunction<-TU;-TU;+TU;>;)TU;", $PUBLIC},
	{"reduceValuesToDouble", "(JLjava/util/function/ToDoubleFunction;DLjava/util/function/DoubleBinaryOperator;)D", "(JLjava/util/function/ToDoubleFunction<-TV;>;DLjava/util/function/DoubleBinaryOperator;)D", $PUBLIC},
	{"reduceValuesToInt", "(JLjava/util/function/ToIntFunction;ILjava/util/function/IntBinaryOperator;)I", "(JLjava/util/function/ToIntFunction<-TV;>;ILjava/util/function/IntBinaryOperator;)I", $PUBLIC},
	{"reduceValuesToLong", "(JLjava/util/function/ToLongFunction;JLjava/util/function/LongBinaryOperator;)J", "(JLjava/util/function/ToLongFunction<-TV;>;JLjava/util/function/LongBinaryOperator;)J", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeEntryIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-Ljava/util/Map$Entry<TK;TV;>;>;)Z", 0},
	{"removeValueIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TV;>;)Z", 0},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{"replaceNode", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;Ljava/lang/Object;)TV;", $FINAL, $method(static_cast<$Object*(ConcurrentHashMap::*)(Object$*,Object$*,Object$*)>(&ConcurrentHashMap::replaceNode))},
	{"resizeStamp", "(I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&ConcurrentHashMap::resizeStamp))},
	{"search", "(JLjava/util/function/BiFunction;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/BiFunction<-TK;-TV;+TU;>;)TU;", $PUBLIC},
	{"searchEntries", "(JLjava/util/function/Function;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<Ljava/util/Map$Entry<TK;TV;>;+TU;>;)TU;", $PUBLIC},
	{"searchKeys", "(JLjava/util/function/Function;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<-TK;+TU;>;)TU;", $PUBLIC},
	{"searchValues", "(JLjava/util/function/Function;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(JLjava/util/function/Function<-TV;+TU;>;)TU;", $PUBLIC},
	{"setTabAt", "([Ljava/util/concurrent/ConcurrentHashMap$Node;ILjava/util/concurrent/ConcurrentHashMap$Node;)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;ILjava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)V", $STATIC | $FINAL, $method(static_cast<void(*)($ConcurrentHashMap$NodeArray*,int32_t,$ConcurrentHashMap$Node*)>(&ConcurrentHashMap::setTabAt))},
	{"size", "()I", nullptr, $PUBLIC},
	{"spread", "(I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&ConcurrentHashMap::spread))},
	{"sumCount", "()J", nullptr, $FINAL, $method(static_cast<int64_t(ConcurrentHashMap::*)()>(&ConcurrentHashMap::sumCount))},
	{"tabAt", "([Ljava/util/concurrent/ConcurrentHashMap$Node;I)Ljava/util/concurrent/ConcurrentHashMap$Node;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;I)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $STATIC | $FINAL, $method(static_cast<$ConcurrentHashMap$Node*(*)($ConcurrentHashMap$NodeArray*,int32_t)>(&ConcurrentHashMap::tabAt))},
	{"tableSizeFor", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&ConcurrentHashMap::tableSizeFor))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transfer", "([Ljava/util/concurrent/ConcurrentHashMap$Node;[Ljava/util/concurrent/ConcurrentHashMap$Node;)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;[Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)V", $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap::*)($ConcurrentHashMap$NodeArray*,$ConcurrentHashMap$NodeArray*)>(&ConcurrentHashMap::transfer))},
	{"treeifyBin", "([Ljava/util/concurrent/ConcurrentHashMap$Node;I)V", "([Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;I)V", $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap::*)($ConcurrentHashMap$NodeArray*,int32_t)>(&ConcurrentHashMap::treeifyBin))},
	{"tryPresize", "(I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap::*)(int32_t)>(&ConcurrentHashMap::tryPresize))},
	{"untreeify", "(Ljava/util/concurrent/ConcurrentHashMap$Node;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $STATIC, $method(static_cast<$ConcurrentHashMap$Node*(*)($ConcurrentHashMap$Node*)>(&ConcurrentHashMap::untreeify))},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ConcurrentHashMap::*)($ObjectOutputStream*)>(&ConcurrentHashMap::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ConcurrentHashMap_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToIntTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsToIntTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToIntTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceEntriesToIntTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceValuesToIntTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceValuesToIntTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToIntTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceKeysToIntTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceEntriesToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceValuesToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceValuesToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToLongTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceKeysToLongTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToDoubleTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsToDoubleTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToDoubleTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceEntriesToDoubleTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceValuesToDoubleTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceValuesToDoubleTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceKeysToDoubleTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceKeysToDoubleTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceMappingsTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceEntriesTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceEntriesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceValuesTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceValuesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapReduceKeysTask", "java.util.concurrent.ConcurrentHashMap", "MapReduceKeysTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ReduceEntriesTask", "java.util.concurrent.ConcurrentHashMap", "ReduceEntriesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ReduceValuesTask", "java.util.concurrent.ConcurrentHashMap", "ReduceValuesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ReduceKeysTask", "java.util.concurrent.ConcurrentHashMap", "ReduceKeysTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$SearchMappingsTask", "java.util.concurrent.ConcurrentHashMap", "SearchMappingsTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$SearchEntriesTask", "java.util.concurrent.ConcurrentHashMap", "SearchEntriesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$SearchValuesTask", "java.util.concurrent.ConcurrentHashMap", "SearchValuesTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$SearchKeysTask", "java.util.concurrent.ConcurrentHashMap", "SearchKeysTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachTransformedMappingTask", "java.util.concurrent.ConcurrentHashMap", "ForEachTransformedMappingTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachTransformedEntryTask", "java.util.concurrent.ConcurrentHashMap", "ForEachTransformedEntryTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachTransformedValueTask", "java.util.concurrent.ConcurrentHashMap", "ForEachTransformedValueTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachTransformedKeyTask", "java.util.concurrent.ConcurrentHashMap", "ForEachTransformedKeyTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachMappingTask", "java.util.concurrent.ConcurrentHashMap", "ForEachMappingTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachEntryTask", "java.util.concurrent.ConcurrentHashMap", "ForEachEntryTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachValueTask", "java.util.concurrent.ConcurrentHashMap", "ForEachValueTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForEachKeyTask", "java.util.concurrent.ConcurrentHashMap", "ForEachKeyTask", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BulkTask", "java.util.concurrent.ConcurrentHashMap", "BulkTask", $STATIC | $ABSTRACT},
	{"java.util.concurrent.ConcurrentHashMap$EntrySetView", "java.util.concurrent.ConcurrentHashMap", "EntrySetView", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ValuesView", "java.util.concurrent.ConcurrentHashMap", "ValuesView", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$KeySetView", "java.util.concurrent.ConcurrentHashMap", "KeySetView", $PUBLIC | $STATIC},
	{"java.util.concurrent.ConcurrentHashMap$CollectionView", "java.util.concurrent.ConcurrentHashMap", "CollectionView", $STATIC | $ABSTRACT},
	{"java.util.concurrent.ConcurrentHashMap$EntrySpliterator", "java.util.concurrent.ConcurrentHashMap", "EntrySpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ValueSpliterator", "java.util.concurrent.ConcurrentHashMap", "ValueSpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$KeySpliterator", "java.util.concurrent.ConcurrentHashMap", "KeySpliterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$MapEntry", "java.util.concurrent.ConcurrentHashMap", "MapEntry", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$EntryIterator", "java.util.concurrent.ConcurrentHashMap", "EntryIterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ValueIterator", "java.util.concurrent.ConcurrentHashMap", "ValueIterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$KeyIterator", "java.util.concurrent.ConcurrentHashMap", "KeyIterator", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$BaseIterator", "java.util.concurrent.ConcurrentHashMap", "BaseIterator", $STATIC},
	{"java.util.concurrent.ConcurrentHashMap$Traverser", "java.util.concurrent.ConcurrentHashMap", "Traverser", $STATIC},
	{"java.util.concurrent.ConcurrentHashMap$TableStack", "java.util.concurrent.ConcurrentHashMap", "TableStack", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$TreeBin", "java.util.concurrent.ConcurrentHashMap", "TreeBin", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$TreeNode", "java.util.concurrent.ConcurrentHashMap", "TreeNode", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$CounterCell", "java.util.concurrent.ConcurrentHashMap", "CounterCell", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ReservationNode", "java.util.concurrent.ConcurrentHashMap", "ReservationNode", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$ForwardingNode", "java.util.concurrent.ConcurrentHashMap", "ForwardingNode", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Segment", "java.util.concurrent.ConcurrentHashMap", "Segment", $STATIC},
	{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap",
	"java.util.AbstractMap",
	"java.util.concurrent.ConcurrentMap,java.io.Serializable",
	_ConcurrentHashMap_FieldInfo_,
	_ConcurrentHashMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/AbstractMap<TK;TV;>;Ljava/util/concurrent/ConcurrentMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentHashMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToIntTask,java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToIntTask,java.util.concurrent.ConcurrentHashMap$MapReduceValuesToIntTask,java.util.concurrent.ConcurrentHashMap$MapReduceKeysToIntTask,java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToLongTask,java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToLongTask,java.util.concurrent.ConcurrentHashMap$MapReduceValuesToLongTask,java.util.concurrent.ConcurrentHashMap$MapReduceKeysToLongTask,java.util.concurrent.ConcurrentHashMap$MapReduceMappingsToDoubleTask,java.util.concurrent.ConcurrentHashMap$MapReduceEntriesToDoubleTask,java.util.concurrent.ConcurrentHashMap$MapReduceValuesToDoubleTask,java.util.concurrent.ConcurrentHashMap$MapReduceKeysToDoubleTask,java.util.concurrent.ConcurrentHashMap$MapReduceMappingsTask,java.util.concurrent.ConcurrentHashMap$MapReduceEntriesTask,java.util.concurrent.ConcurrentHashMap$MapReduceValuesTask,java.util.concurrent.ConcurrentHashMap$MapReduceKeysTask,java.util.concurrent.ConcurrentHashMap$ReduceEntriesTask,java.util.concurrent.ConcurrentHashMap$ReduceValuesTask,java.util.concurrent.ConcurrentHashMap$ReduceKeysTask,java.util.concurrent.ConcurrentHashMap$SearchMappingsTask,java.util.concurrent.ConcurrentHashMap$SearchEntriesTask,java.util.concurrent.ConcurrentHashMap$SearchValuesTask,java.util.concurrent.ConcurrentHashMap$SearchKeysTask,java.util.concurrent.ConcurrentHashMap$ForEachTransformedMappingTask,java.util.concurrent.ConcurrentHashMap$ForEachTransformedEntryTask,java.util.concurrent.ConcurrentHashMap$ForEachTransformedValueTask,java.util.concurrent.ConcurrentHashMap$ForEachTransformedKeyTask,java.util.concurrent.ConcurrentHashMap$ForEachMappingTask,java.util.concurrent.ConcurrentHashMap$ForEachEntryTask,java.util.concurrent.ConcurrentHashMap$ForEachValueTask,java.util.concurrent.ConcurrentHashMap$ForEachKeyTask,java.util.concurrent.ConcurrentHashMap$BulkTask,java.util.concurrent.ConcurrentHashMap$EntrySetView,java.util.concurrent.ConcurrentHashMap$ValuesView,java.util.concurrent.ConcurrentHashMap$KeySetView,java.util.concurrent.ConcurrentHashMap$CollectionView,java.util.concurrent.ConcurrentHashMap$EntrySpliterator,java.util.concurrent.ConcurrentHashMap$ValueSpliterator,java.util.concurrent.ConcurrentHashMap$KeySpliterator,java.util.concurrent.ConcurrentHashMap$MapEntry,java.util.concurrent.ConcurrentHashMap$EntryIterator,java.util.concurrent.ConcurrentHashMap$ValueIterator,java.util.concurrent.ConcurrentHashMap$KeyIterator,java.util.concurrent.ConcurrentHashMap$BaseIterator,java.util.concurrent.ConcurrentHashMap$Traverser,java.util.concurrent.ConcurrentHashMap$TableStack,java.util.concurrent.ConcurrentHashMap$TreeBin,java.util.concurrent.ConcurrentHashMap$TreeNode,java.util.concurrent.ConcurrentHashMap$CounterCell,java.util.concurrent.ConcurrentHashMap$ReservationNode,java.util.concurrent.ConcurrentHashMap$ForwardingNode,java.util.concurrent.ConcurrentHashMap$Segment,java.util.concurrent.ConcurrentHashMap$Node"
};

$Object* allocate$ConcurrentHashMap($Class* clazz) {
	return $of($alloc(ConcurrentHashMap));
}

$Object* ConcurrentHashMap::clone() {
	 return this->$AbstractMap::clone();
}

void ConcurrentHashMap::finalize() {
	this->$AbstractMap::finalize();
}


float ConcurrentHashMap::LOAD_FACTOR = 0.0;

int32_t ConcurrentHashMap::NCPU = 0;

$ObjectStreamFieldArray* ConcurrentHashMap::serialPersistentFields = nullptr;
$Unsafe* ConcurrentHashMap::U = nullptr;
int64_t ConcurrentHashMap::SIZECTL = 0;
int64_t ConcurrentHashMap::TRANSFERINDEX = 0;
int64_t ConcurrentHashMap::BASECOUNT = 0;
int64_t ConcurrentHashMap::CELLSBUSY = 0;
int64_t ConcurrentHashMap::CELLVALUE = 0;
int32_t ConcurrentHashMap::ABASE = 0;
int32_t ConcurrentHashMap::ASHIFT = 0;

int32_t ConcurrentHashMap::spread(int32_t h) {
	$init(ConcurrentHashMap);
	return (int32_t)((h ^ ((int32_t)((uint32_t)h >> 16))) & (uint32_t)ConcurrentHashMap::HASH_BITS);
}

int32_t ConcurrentHashMap::tableSizeFor(int32_t c) {
	$init(ConcurrentHashMap);
	int32_t n = $usr(-1, $Integer::numberOfLeadingZeros(c - 1));
	return (n < 0) ? 1 : (n >= ConcurrentHashMap::MAXIMUM_CAPACITY) ? ConcurrentHashMap::MAXIMUM_CAPACITY : n + 1;
}

$Class* ConcurrentHashMap::comparableClassFor(Object$* x) {
	$init(ConcurrentHashMap);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Comparable, x)) {
		$Class* c = nullptr;
		$var($TypeArray, ts, nullptr);
		$var($TypeArray, as, nullptr);
		$var($ParameterizedType, p, nullptr);
		$load($String);
		if ((c = $nc($of(x))->getClass()) == $String::class$) {
			return c;
		}
		if (($assign(ts, $nc(c)->getGenericInterfaces())) != nullptr) {
			{
				$var($TypeArray, arr$, ts);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Type, t, arr$->get(i$));
					{
						$load($Comparable);
						bool var$0 = ($instanceOf($ParameterizedType, t)) && ($equals($nc(($assign(p, $cast($ParameterizedType, t))))->getRawType(), $Comparable::class$));
						if (var$0 && ($assign(as, $nc(p)->getActualTypeArguments())) != nullptr && $nc(as)->length == 1 && $equals(as->get(0), c)) {
							return c;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

int32_t ConcurrentHashMap::compareComparables($Class* kc, Object$* k, Object$* x) {
	$init(ConcurrentHashMap);
	return (x == nullptr || $nc($of(x))->getClass() != kc ? 0 : $nc(($cast($Comparable, k)))->compareTo(x));
}

$ConcurrentHashMap$Node* ConcurrentHashMap::tabAt($ConcurrentHashMap$NodeArray* tab, int32_t i) {
	$init(ConcurrentHashMap);
	return $cast($ConcurrentHashMap$Node, $nc(ConcurrentHashMap::U)->getReferenceAcquire(tab, ($sl((int64_t)i, ConcurrentHashMap::ASHIFT)) + ConcurrentHashMap::ABASE));
}

bool ConcurrentHashMap::casTabAt($ConcurrentHashMap$NodeArray* tab, int32_t i, $ConcurrentHashMap$Node* c, $ConcurrentHashMap$Node* v) {
	$init(ConcurrentHashMap);
	return $nc(ConcurrentHashMap::U)->compareAndSetReference(tab, ($sl((int64_t)i, ConcurrentHashMap::ASHIFT)) + ConcurrentHashMap::ABASE, c, v);
}

void ConcurrentHashMap::setTabAt($ConcurrentHashMap$NodeArray* tab, int32_t i, $ConcurrentHashMap$Node* v) {
	$init(ConcurrentHashMap);
	$nc(ConcurrentHashMap::U)->putReferenceRelease(tab, ($sl((int64_t)i, ConcurrentHashMap::ASHIFT)) + ConcurrentHashMap::ABASE, v);
}

void ConcurrentHashMap::init$() {
	$AbstractMap::init$();
}

void ConcurrentHashMap::init$(int32_t initialCapacity) {
	ConcurrentHashMap::init$(initialCapacity, ConcurrentHashMap::LOAD_FACTOR, 1);
}

void ConcurrentHashMap::init$($Map* m) {
	$AbstractMap::init$();
	this->sizeCtl = ConcurrentHashMap::DEFAULT_CAPACITY;
	putAll(m);
}

void ConcurrentHashMap::init$(int32_t initialCapacity, float loadFactor) {
	ConcurrentHashMap::init$(initialCapacity, loadFactor, 1);
}

void ConcurrentHashMap::init$(int32_t initialCapacity, float loadFactor, int32_t concurrencyLevel) {
	$AbstractMap::init$();
	if (!(loadFactor > 0.0f) || initialCapacity < 0 || concurrencyLevel <= 0) {
		$throwNew($IllegalArgumentException);
	}
	if (initialCapacity < concurrencyLevel) {
		initialCapacity = concurrencyLevel;
	}
	int64_t size = $cast(int64_t, (1.0 + (int64_t)initialCapacity / loadFactor));
	int32_t cap = (size >= (int64_t)ConcurrentHashMap::MAXIMUM_CAPACITY) ? ConcurrentHashMap::MAXIMUM_CAPACITY : tableSizeFor((int32_t)size);
	this->sizeCtl = cap;
}

int32_t ConcurrentHashMap::size() {
	int64_t n = sumCount();
	return ((n < (int64_t)0) ? 0 : (n > (int64_t)$Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (int32_t)n);
}

bool ConcurrentHashMap::isEmpty() {
	return sumCount() <= (int64_t)0;
}

$Object* ConcurrentHashMap::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, tab, nullptr);
	$var($ConcurrentHashMap$Node, e, nullptr);
	$var($ConcurrentHashMap$Node, p, nullptr);
	int32_t n = 0;
	int32_t eh = 0;
	$var($Object, ek, nullptr);
	int32_t h = spread($nc($of(key))->hashCode());
	bool var$1 = ($assign(tab, this->table)) != nullptr;
	bool var$0 = var$1 && (n = $nc(tab)->length) > 0;
	if (var$0 && ($assign(e, tabAt(tab, (int32_t)((n - 1) & (uint32_t)h)))) != nullptr) {
		if ((eh = $nc(e)->hash) == h) {
			bool var$2 = $equals($assign(ek, e->key), key);
			if (var$2 || (ek != nullptr && $nc($of(key))->equals(ek))) {
				return $of(e->val);
			}
		} else if (eh < 0) {
			return $of(($assign(p, e->find(h, key))) != nullptr ? $cast($Object, $nc(p)->val) : ($Object*)nullptr);
		}
		while (($assign(e, $nc(e)->next)) != nullptr) {
			bool var$3 = e->hash == h;
			if (var$3) {
				bool var$4 = $equals($assign(ek, e->key), key);
				var$3 = (var$4 || (ek != nullptr && $nc($of(key))->equals(ek)));
			}
			if (var$3) {
				return $of(e->val);
			}
		}
	}
	return $of(nullptr);
}

bool ConcurrentHashMap::containsKey(Object$* key) {
	return get(key) != nullptr;
}

bool ConcurrentHashMap::containsValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$var($Object, v, nullptr);
				bool var$0 = $equals($assign(v, $nc(p)->val), value);
				if (var$0 || (v != nullptr && $nc($of(value))->equals(v))) {
					return true;
				}
			}
		}
	}
	return false;
}

$Object* ConcurrentHashMap::put(Object$* key, Object$* value) {
	return $of(putVal(key, value, false));
}

$Object* ConcurrentHashMap::putVal(Object$* key, Object$* value, bool onlyIfAbsent) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || value == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t hash = spread($nc($of(key))->hashCode());
	int32_t binCount = 0;
	{
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t n = 0;
			int32_t i = 0;
			int32_t fh = 0;
			$var($Object, fk, nullptr);
			$var($Object, fv, nullptr);
			if (tab == nullptr || (n = $nc(tab)->length) == 0) {
				$assign(tab, initTable());
			} else if (($assign(f, tabAt(tab, i = (int32_t)((n - 1) & (uint32_t)hash)))) == nullptr) {
				if (casTabAt(tab, i, nullptr, $$new($ConcurrentHashMap$Node, hash, key, value))) {
					break;
				}
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				$assign(tab, helpTransfer(tab, f));
			} else {
				bool var$2 = onlyIfAbsent && fh == hash;
				if (var$2) {
					bool var$3 = $equals($assign(fk, f->key), key);
					var$2 = (var$3 || (fk != nullptr && $nc($of(key))->equals(fk)));
				}
				if (var$2 && ($assign(fv, f->val)) != nullptr) {
					return $of(fv);
				} else {
					$var($Object, oldVal, nullptr);
					$synchronized(f) {
						if (tabAt(tab, i) == f) {
							if (fh >= 0) {
								binCount = 1;
								{
									$var($ConcurrentHashMap$Node, e, f);
									for (;; ++binCount) {
										$var($Object, ek, nullptr);
										bool var$4 = e->hash == hash;
										if (var$4) {
											bool var$5 = $equals($assign(ek, e->key), key);
											var$4 = (var$5 || (ek != nullptr && $of(key)->equals(ek)));
										}
										if (var$4) {
											$assign(oldVal, e->val);
											if (!onlyIfAbsent) {
												$set(e, val, value);
											}
											break;
										}
										$var($ConcurrentHashMap$Node, pred, e);
										if (($assign(e, e->next)) == nullptr) {
											$set(pred, next, $new($ConcurrentHashMap$Node, hash, key, value));
											break;
										}
									}
								}
							} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
								$var($ConcurrentHashMap$Node, p, nullptr);
								binCount = 2;
								if (($assign(p, $nc(($cast($ConcurrentHashMap$TreeBin, f)))->putTreeVal(hash, key, value))) != nullptr) {
									$assign(oldVal, $nc(p)->val);
									if (!onlyIfAbsent) {
										$set(p, val, value);
									}
								}
							} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
								$throwNew($IllegalStateException, "Recursive update"_s);
							}
						}
					}
					if (binCount != 0) {
						if (binCount >= ConcurrentHashMap::TREEIFY_THRESHOLD) {
							treeifyBin(tab, i);
						}
						if (oldVal != nullptr) {
							return $of(oldVal);
						}
						break;
					}
				}
			}
		}
	}
	addCount(1, binCount);
	return $of(nullptr);
}

void ConcurrentHashMap::putAll($Map* m) {
	$useLocalCurrentObjectStackCache();
	tryPresize($nc(m)->size());
	{
		$var($Iterator, i$, $nc($($nc(m)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			$var($Object, var$0, $nc(e)->getKey());
			putVal(var$0, $(e->getValue()), false);
		}
	}
}

$Object* ConcurrentHashMap::remove(Object$* key) {
	return $of(replaceNode(key, nullptr, nullptr));
}

$Object* ConcurrentHashMap::replaceNode(Object$* key, Object$* value, Object$* cv) {
	$useLocalCurrentObjectStackCache();
	int32_t hash = spread($nc($of(key))->hashCode());
	{
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t n = 0;
			int32_t i = 0;
			int32_t fh = 0;
			bool var$0 = tab == nullptr || (n = $nc(tab)->length) == 0;
			if (var$0 || ($assign(f, tabAt(tab, i = (int32_t)((n - 1) & (uint32_t)hash)))) == nullptr) {
				break;
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				$assign(tab, helpTransfer(tab, f));
			} else {
				$var($Object, oldVal, nullptr);
				bool validated = false;
				$synchronized(f) {
					if (tabAt(tab, i) == f) {
						if (fh >= 0) {
							validated = true;
							{
								$var($ConcurrentHashMap$Node, e, f);
								$var($ConcurrentHashMap$Node, pred, nullptr);
								for (;;) {
									$var($Object, ek, nullptr);
									bool var$1 = e->hash == hash;
									if (var$1) {
										bool var$2 = $equals($assign(ek, e->key), key);
										var$1 = (var$2 || (ek != nullptr && $nc($of(key))->equals(ek)));
									}
									if (var$1) {
										$var($Object, ev, e->val);
										if (cv == nullptr || $equals(cv, ev) || (ev != nullptr && $nc($of(cv))->equals(ev))) {
											$assign(oldVal, ev);
											if (value != nullptr) {
												$set(e, val, value);
											} else if (pred != nullptr) {
												$set(pred, next, e->next);
											} else {
												setTabAt(tab, i, e->next);
											}
										}
										break;
									}
									$assign(pred, e);
									if (($assign(e, e->next)) == nullptr) {
										break;
									}
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
							validated = true;
							$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, f));
							$var($ConcurrentHashMap$TreeNode, r, nullptr);
							$var($ConcurrentHashMap$TreeNode, p, nullptr);
							bool var$3 = ($assign(r, t->root)) != nullptr;
							if (var$3 && ($assign(p, $nc(r)->findTreeNode(hash, key, nullptr))) != nullptr) {
								$var($Object, pv, $nc(p)->val);
								if (cv == nullptr || $equals(cv, pv) || (pv != nullptr && $nc($of(cv))->equals(pv))) {
									$assign(oldVal, pv);
									if (value != nullptr) {
										$set(p, val, value);
									} else if (t->removeTreeNode(p)) {
										setTabAt(tab, i, $(untreeify(t->first)));
									}
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
							$throwNew($IllegalStateException, "Recursive update"_s);
						}
					}
				}
				if (validated) {
					if (oldVal != nullptr) {
						if (value == nullptr) {
							addCount(-1, -1);
						}
						return $of(oldVal);
					}
					break;
				}
			}
		}
	}
	return $of(nullptr);
}

void ConcurrentHashMap::clear() {
	$useLocalCurrentObjectStackCache();
	int64_t delta = 0;
	int32_t i = 0;
	$var($ConcurrentHashMap$NodeArray, tab, this->table);
	while (tab != nullptr && i < tab->length) {
		int32_t fh = 0;
		$var($ConcurrentHashMap$Node, f, tabAt(tab, i));
		if (f == nullptr) {
			++i;
		} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
			$assign(tab, helpTransfer(tab, f));
			i = 0;
		} else {
			$synchronized(f) {
				if (tabAt(tab, i) == f) {
					$var($ConcurrentHashMap$Node, p, fh >= 0 ? f : ($instanceOf($ConcurrentHashMap$TreeBin, f)) ? $cast($ConcurrentHashMap$Node, $nc(($cast($ConcurrentHashMap$TreeBin, f)))->first) : ($ConcurrentHashMap$Node*)nullptr);
					while (p != nullptr) {
						--delta;
						$assign(p, p->next);
					}
					setTabAt(tab, i++, nullptr);
				}
			}
		}
	}
	if (delta != (int64_t)0) {
		addCount(delta, -1);
	}
}

$Set* ConcurrentHashMap::keySet() {
	$var($ConcurrentHashMap$KeySetView, ks, nullptr);
	if (($assign(ks, this->keySet$)) != nullptr) {
		return ks;
	}
	return ($assignField(this, keySet$, $new($ConcurrentHashMap$KeySetView, this, nullptr)));
}

$Collection* ConcurrentHashMap::values() {
	$var($ConcurrentHashMap$ValuesView, vs, nullptr);
	if (($assign(vs, this->values$)) != nullptr) {
		return vs;
	}
	return ($assignField(this, values$, $new($ConcurrentHashMap$ValuesView, this)));
}

$Set* ConcurrentHashMap::entrySet() {
	$var($ConcurrentHashMap$EntrySetView, es, nullptr);
	if (($assign(es, this->entrySet$)) != nullptr) {
		return es;
	}
	return ($assignField(this, entrySet$, $new($ConcurrentHashMap$EntrySetView, this)));
}

int32_t ConcurrentHashMap::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t h = 0;
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				int32_t var$0 = $nc($of($nc(p)->key))->hashCode();
				h += var$0 ^ $nc($of(p->val))->hashCode();
			}
		}
	}
	return h;
}

$String* ConcurrentHashMap::toString() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	int32_t f = ($assign(t, this->table)) == nullptr ? 0 : $nc(t)->length;
	$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, f, 0, f));
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(u'{');
	$var($ConcurrentHashMap$Node, p, nullptr);
	if (($assign(p, it->advance())) != nullptr) {
		for (;;) {
			$var($Object, k, $nc(p)->key);
			$var($Object, v, p->val);
			sb->append($equals(k, this) ? $of("(this Map)"_s) : k);
			sb->append(u'=');
			sb->append($equals(v, this) ? $of("(this Map)"_s) : v);
			if (($assign(p, it->advance())) == nullptr) {
				break;
			}
			sb->append(u',')->append(u' ');
		}
	}
	return sb->append(u'}')->toString();
}

bool ConcurrentHashMap::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!$equals(o, this)) {
		if (!($instanceOf($Map, o))) {
			return false;
		}
		$var($Map, m, $cast($Map, o));
		$var($ConcurrentHashMap$NodeArray, t, nullptr);
		int32_t f = ($assign(t, this->table)) == nullptr ? 0 : $nc(t)->length;
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, f, 0, f));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$var($Object, val, $nc(p)->val);
				$var($Object, v, $nc(m)->get(p->key));
				if (v == nullptr || (!$equals(v, val) && !$nc($of(v))->equals(val))) {
					return false;
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(m)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, mk, nullptr);
					$var($Object, mv, nullptr);
					$var($Object, v, nullptr);
					bool var$2 = ($assign(mk, $nc(e)->getKey())) == nullptr;
					bool var$1 = var$2 || ($assign(mv, $nc(e)->getValue())) == nullptr;
					bool var$0 = var$1 || ($assign(v, get(mk))) == nullptr;
					if (var$0 || (!$equals(mv, v) && !$nc($of(mv))->equals(v))) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

void ConcurrentHashMap::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	int32_t sshift = 0;
	int32_t ssize = 1;
	while (ssize < ConcurrentHashMap::DEFAULT_CONCURRENCY_LEVEL) {
		++sshift;
		ssize <<= 1;
	}
	int32_t segmentShift = 32 - sshift;
	int32_t segmentMask = ssize - 1;
	$var($ConcurrentHashMap$SegmentArray, segments, $new($ConcurrentHashMap$SegmentArray, ConcurrentHashMap::DEFAULT_CONCURRENCY_LEVEL));
	for (int32_t i = 0; i < segments->length; ++i) {
		segments->set(i, $$new($ConcurrentHashMap$Segment, ConcurrentHashMap::LOAD_FACTOR));
	}
	$var($ObjectOutputStream$PutField, streamFields, $nc(s)->putFields());
	$nc(streamFields)->put("segments"_s, $of(segments));
	streamFields->put("segmentShift"_s, segmentShift);
	streamFields->put("segmentMask"_s, segmentMask);
	s->writeFields();
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				s->writeObject($nc(p)->key);
				s->writeObject($nc(p)->val);
			}
		}
	}
	s->writeObject(nullptr);
	s->writeObject(nullptr);
}

void ConcurrentHashMap::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	this->sizeCtl = -1;
	$nc(s)->defaultReadObject();
	int64_t size = 0;
	$var($ConcurrentHashMap$Node, p, nullptr);
	for (;;) {
		$var($Object, k, s->readObject());
		$var($Object, v, s->readObject());
		if (k != nullptr && v != nullptr) {
			$assign(p, $new($ConcurrentHashMap$Node, spread($of(k)->hashCode()), k, v, p));
			++size;
		} else {
			break;
		}
	}
	if (size == (int64_t)0) {
		this->sizeCtl = 0;
	} else {
		int64_t ts = $cast(int64_t, (1.0 + $div(size, ConcurrentHashMap::LOAD_FACTOR)));
		int32_t n = (ts >= (int64_t)ConcurrentHashMap::MAXIMUM_CAPACITY) ? ConcurrentHashMap::MAXIMUM_CAPACITY : tableSizeFor((int32_t)ts);
		$var($ConcurrentHashMap$NodeArray, tab, $new($ConcurrentHashMap$NodeArray, n));
		int32_t mask = n - 1;
		int64_t added = 0;
		while (p != nullptr) {
			bool insertAtFront = false;
			$var($ConcurrentHashMap$Node, next, p->next);
			$var($ConcurrentHashMap$Node, first, nullptr);
			int32_t h = p->hash;
			int32_t j = (int32_t)(h & (uint32_t)mask);
			if (($assign(first, tabAt(tab, j))) == nullptr) {
				insertAtFront = true;
			} else {
				$var($Object, k, p->key);
				if ($nc(first)->hash < 0) {
					$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, first));
					if (t->putTreeVal(h, k, p->val) == nullptr) {
						++added;
					}
					insertAtFront = false;
				} else {
					int32_t binCount = 0;
					insertAtFront = true;
					$var($ConcurrentHashMap$Node, q, nullptr);
					$var($Object, qk, nullptr);
					for ($assign(q, first); q != nullptr; $assign(q, q->next)) {
						bool var$0 = $nc(q)->hash == h;
						if (var$0) {
							bool var$1 = $equals($assign(qk, q->key), k);
							var$0 = (var$1 || (qk != nullptr && $nc($of(k))->equals(qk)));
						}
						if (var$0) {
							insertAtFront = false;
							break;
						}
						++binCount;
					}
					if (insertAtFront && binCount >= ConcurrentHashMap::TREEIFY_THRESHOLD) {
						insertAtFront = false;
						++added;
						$set(p, next, first);
						$var($ConcurrentHashMap$TreeNode, hd, nullptr);
						$var($ConcurrentHashMap$TreeNode, tl, nullptr);
						for ($assign(q, p); q != nullptr; $assign(q, q->next)) {
							$var($ConcurrentHashMap$TreeNode, t, $new($ConcurrentHashMap$TreeNode, $nc(q)->hash, q->key, q->val, nullptr, nullptr));
							if (($assignField(t, prev, tl)) == nullptr) {
								$assign(hd, t);
							} else {
								$set($nc(tl), next, t);
							}
							$assign(tl, t);
						}
						setTabAt(tab, j, $$new($ConcurrentHashMap$TreeBin, hd));
					}
				}
			}
			if (insertAtFront) {
				++added;
				$set(p, next, first);
				setTabAt(tab, j, p);
			}
			$assign(p, next);
		}
		$set(this, table, tab);
		this->sizeCtl = n - ((int32_t)((uint32_t)n >> 2));
		this->baseCount = added;
	}
}

$Object* ConcurrentHashMap::putIfAbsent(Object$* key, Object$* value) {
	return $of(putVal(key, value, true));
}

bool ConcurrentHashMap::remove(Object$* key, Object$* value) {
	if (key == nullptr) {
		$throwNew($NullPointerException);
	}
	return value != nullptr && replaceNode(key, nullptr, value) != nullptr;
}

bool ConcurrentHashMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	if (key == nullptr || oldValue == nullptr || newValue == nullptr) {
		$throwNew($NullPointerException);
	}
	return replaceNode(key, newValue, oldValue) != nullptr;
}

$Object* ConcurrentHashMap::replace(Object$* key, Object$* value) {
	if (key == nullptr || value == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of(replaceNode(key, value, nullptr));
}

$Object* ConcurrentHashMap::getOrDefault(Object$* key, Object$* defaultValue) {
	$var($Object, v, nullptr);
	return $of(($assign(v, get(key))) == nullptr ? $of(defaultValue) : v);
}

void ConcurrentHashMap::forEach($BiConsumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$nc(action)->accept($nc(p)->key, p->val);
			}
		}
	}
}

void ConcurrentHashMap::replaceAll($BiFunction* function) {
	$useLocalCurrentObjectStackCache();
	if (function == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$var($Object, oldValue, $nc(p)->val);
				{
					$var($Object, key, p->key);
					for (;;) {
						$var($Object, newValue, $nc(function)->apply(key, oldValue));
						if (newValue == nullptr) {
							$throwNew($NullPointerException);
						}
						bool var$0 = replaceNode(key, newValue, oldValue) != nullptr;
						if (var$0 || ($assign(oldValue, get(key))) == nullptr) {
							break;
						}
					}
				}
			}
		}
	}
}

bool ConcurrentHashMap::removeEntryIf($Predicate* function) {
	$useLocalCurrentObjectStackCache();
	if (function == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	bool removed = false;
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$var($Object, k, $nc(p)->key);
				$var($Object, v, p->val);
				$var($Map$Entry, e, $new($AbstractMap$SimpleImmutableEntry, k, v));
				bool var$0 = $nc(function)->test(e);
				if (var$0 && replaceNode(k, nullptr, v) != nullptr) {
					removed = true;
				}
			}
		}
	}
	return removed;
}

bool ConcurrentHashMap::removeValueIf($Predicate* function) {
	$useLocalCurrentObjectStackCache();
	if (function == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	bool removed = false;
	if (($assign(t, this->table)) != nullptr) {
		$var($ConcurrentHashMap$Traverser, it, $new($ConcurrentHashMap$Traverser, t, $nc(t)->length, 0, t->length));
		{
			$var($ConcurrentHashMap$Node, p, nullptr);
			for (; ($assign(p, it->advance())) != nullptr;) {
				$var($Object, k, $nc(p)->key);
				$var($Object, v, p->val);
				bool var$0 = $nc(function)->test(v);
				if (var$0 && replaceNode(k, nullptr, v) != nullptr) {
					removed = true;
				}
			}
		}
	}
	return removed;
}

$Object* ConcurrentHashMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || mappingFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t h = spread($nc($of(key))->hashCode());
	$var($Object, val, nullptr);
	int32_t binCount = 0;
	{
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t n = 0;
			int32_t i = 0;
			int32_t fh = 0;
			$var($Object, fk, nullptr);
			$var($Object, fv, nullptr);
			if (tab == nullptr || (n = $nc(tab)->length) == 0) {
				$assign(tab, initTable());
			} else if (($assign(f, tabAt(tab, i = (int32_t)((n - 1) & (uint32_t)h)))) == nullptr) {
				$var($ConcurrentHashMap$Node, r, $new($ConcurrentHashMap$ReservationNode));
				$synchronized(r) {
					if (casTabAt(tab, i, nullptr, r)) {
						binCount = 1;
						$var($ConcurrentHashMap$Node, node, nullptr);
						{
							$var($Throwable, var$0, nullptr);
							try {
								if (($assign(val, $nc(mappingFunction)->apply(key))) != nullptr) {
									$assign(node, $new($ConcurrentHashMap$Node, h, key, val));
								}
							} catch ($Throwable&) {
								$assign(var$0, $catch());
							} /*finally*/ {
								setTabAt(tab, i, node);
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
					}
				}
				if (binCount != 0) {
					break;
				}
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				$assign(tab, helpTransfer(tab, f));
			} else {
				bool var$3 = fh == h;
				if (var$3) {
					bool var$4 = $equals($assign(fk, f->key), key);
					var$3 = (var$4 || (fk != nullptr && $nc($of(key))->equals(fk)));
				}
				if (var$3 && ($assign(fv, f->val)) != nullptr) {
					return $of(fv);
				} else {
					bool added = false;
					$synchronized(f) {
						if (tabAt(tab, i) == f) {
							if (fh >= 0) {
								binCount = 1;
								{
									$var($ConcurrentHashMap$Node, e, f);
									for (;; ++binCount) {
										$var($Object, ek, nullptr);
										bool var$5 = e->hash == h;
										if (var$5) {
											bool var$6 = $equals($assign(ek, e->key), key);
											var$5 = (var$6 || (ek != nullptr && $of(key)->equals(ek)));
										}
										if (var$5) {
											$assign(val, e->val);
											break;
										}
										$var($ConcurrentHashMap$Node, pred, e);
										if (($assign(e, e->next)) == nullptr) {
											if (($assign(val, $nc(mappingFunction)->apply(key))) != nullptr) {
												if (pred->next != nullptr) {
													$throwNew($IllegalStateException, "Recursive update"_s);
												}
												added = true;
												$set(pred, next, $new($ConcurrentHashMap$Node, h, key, val));
											}
											break;
										}
									}
								}
							} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
								binCount = 2;
								$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, f));
								$var($ConcurrentHashMap$TreeNode, r, nullptr);
								$var($ConcurrentHashMap$TreeNode, p, nullptr);
								bool var$7 = ($assign(r, t->root)) != nullptr;
								if (var$7 && ($assign(p, $nc(r)->findTreeNode(h, key, nullptr))) != nullptr) {
									$assign(val, $nc(p)->val);
								} else if (($assign(val, $nc(mappingFunction)->apply(key))) != nullptr) {
									added = true;
									t->putTreeVal(h, key, val);
								}
							} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
								$throwNew($IllegalStateException, "Recursive update"_s);
							}
						}
					}
					if (binCount != 0) {
						if (binCount >= ConcurrentHashMap::TREEIFY_THRESHOLD) {
							treeifyBin(tab, i);
						}
						if (!added) {
							return $of(val);
						}
						break;
					}
				}
			}
		}
	}
	if (val != nullptr) {
		addCount(1, binCount);
	}
	return $of(val);
}

$Object* ConcurrentHashMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || remappingFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t h = spread($nc($of(key))->hashCode());
	$var($Object, val, nullptr);
	int32_t delta = 0;
	int32_t binCount = 0;
	{
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t n = 0;
			int32_t i = 0;
			int32_t fh = 0;
			if (tab == nullptr || (n = $nc(tab)->length) == 0) {
				$assign(tab, initTable());
			} else if (($assign(f, tabAt(tab, i = (int32_t)((n - 1) & (uint32_t)h)))) == nullptr) {
				break;
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				$assign(tab, helpTransfer(tab, f));
			} else {
				$synchronized(f) {
					if (tabAt(tab, i) == f) {
						if (fh >= 0) {
							binCount = 1;
							{
								$var($ConcurrentHashMap$Node, e, f);
								$var($ConcurrentHashMap$Node, pred, nullptr);
								for (;; ++binCount) {
									$var($Object, ek, nullptr);
									bool var$0 = e->hash == h;
									if (var$0) {
										bool var$1 = $equals($assign(ek, e->key), key);
										var$0 = (var$1 || (ek != nullptr && $nc($of(key))->equals(ek)));
									}
									if (var$0) {
										$assign(val, $nc(remappingFunction)->apply(key, e->val));
										if (val != nullptr) {
											$set(e, val, val);
										} else {
											delta = -1;
											$var($ConcurrentHashMap$Node, en, e->next);
											if (pred != nullptr) {
												$set(pred, next, en);
											} else {
												setTabAt(tab, i, en);
											}
										}
										break;
									}
									$assign(pred, e);
									if (($assign(e, e->next)) == nullptr) {
										break;
									}
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
							binCount = 2;
							$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, f));
							$var($ConcurrentHashMap$TreeNode, r, nullptr);
							$var($ConcurrentHashMap$TreeNode, p, nullptr);
							bool var$2 = ($assign(r, t->root)) != nullptr;
							if (var$2 && ($assign(p, $nc(r)->findTreeNode(h, key, nullptr))) != nullptr) {
								$assign(val, $nc(remappingFunction)->apply(key, $nc(p)->val));
								if (val != nullptr) {
									$set($nc(p), val, val);
								} else {
									delta = -1;
									if (t->removeTreeNode(p)) {
										setTabAt(tab, i, $(untreeify(t->first)));
									}
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
							$throwNew($IllegalStateException, "Recursive update"_s);
						}
					}
				}
				if (binCount != 0) {
					break;
				}
			}
		}
	}
	if (delta != 0) {
		addCount((int64_t)delta, binCount);
	}
	return $of(val);
}

$Object* ConcurrentHashMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || remappingFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t h = spread($nc($of(key))->hashCode());
	$var($Object, val, nullptr);
	int32_t delta = 0;
	int32_t binCount = 0;
	{
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t n = 0;
			int32_t i = 0;
			int32_t fh = 0;
			if (tab == nullptr || (n = $nc(tab)->length) == 0) {
				$assign(tab, initTable());
			} else if (($assign(f, tabAt(tab, i = (int32_t)((n - 1) & (uint32_t)h)))) == nullptr) {
				$var($ConcurrentHashMap$Node, r, $new($ConcurrentHashMap$ReservationNode));
				$synchronized(r) {
					if (casTabAt(tab, i, nullptr, r)) {
						binCount = 1;
						$var($ConcurrentHashMap$Node, node, nullptr);
						{
							$var($Throwable, var$0, nullptr);
							try {
								if (($assign(val, $nc(remappingFunction)->apply(key, nullptr))) != nullptr) {
									delta = 1;
									$assign(node, $new($ConcurrentHashMap$Node, h, key, val));
								}
							} catch ($Throwable&) {
								$assign(var$0, $catch());
							} /*finally*/ {
								setTabAt(tab, i, node);
							}
							if (var$0 != nullptr) {
								$throw(var$0);
							}
						}
					}
				}
				if (binCount != 0) {
					break;
				}
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				$assign(tab, helpTransfer(tab, f));
			} else {
				$synchronized(f) {
					if (tabAt(tab, i) == f) {
						if (fh >= 0) {
							binCount = 1;
							{
								$var($ConcurrentHashMap$Node, e, f);
								$var($ConcurrentHashMap$Node, pred, nullptr);
								for (;; ++binCount) {
									$var($Object, ek, nullptr);
									bool var$1 = e->hash == h;
									if (var$1) {
										bool var$2 = $equals($assign(ek, e->key), key);
										var$1 = (var$2 || (ek != nullptr && $nc($of(key))->equals(ek)));
									}
									if (var$1) {
										$assign(val, $nc(remappingFunction)->apply(key, e->val));
										if (val != nullptr) {
											$set(e, val, val);
										} else {
											delta = -1;
											$var($ConcurrentHashMap$Node, en, e->next);
											if (pred != nullptr) {
												$set(pred, next, en);
											} else {
												setTabAt(tab, i, en);
											}
										}
										break;
									}
									$assign(pred, e);
									if (($assign(e, e->next)) == nullptr) {
										$assign(val, $nc(remappingFunction)->apply(key, nullptr));
										if (val != nullptr) {
											if (pred->next != nullptr) {
												$throwNew($IllegalStateException, "Recursive update"_s);
											}
											delta = 1;
											$set(pred, next, $new($ConcurrentHashMap$Node, h, key, val));
										}
										break;
									}
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
							binCount = 1;
							$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, f));
							$var($ConcurrentHashMap$TreeNode, r, nullptr);
							$var($ConcurrentHashMap$TreeNode, p, nullptr);
							if (($assign(r, t->root)) != nullptr) {
								$assign(p, $nc(r)->findTreeNode(h, key, nullptr));
							} else {
								$assign(p, nullptr);
							}
							$var($Object, pv, (p == nullptr) ? ($Object*)nullptr : $cast($Object, $nc(p)->val));
							$assign(val, $nc(remappingFunction)->apply(key, pv));
							if (val != nullptr) {
								if (p != nullptr) {
									$set(p, val, val);
								} else {
									delta = 1;
									t->putTreeVal(h, key, val);
								}
							} else if (p != nullptr) {
								delta = -1;
								if (t->removeTreeNode(p)) {
									setTabAt(tab, i, $(untreeify(t->first)));
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
							$throwNew($IllegalStateException, "Recursive update"_s);
						}
					}
				}
				if (binCount != 0) {
					if (binCount >= ConcurrentHashMap::TREEIFY_THRESHOLD) {
						treeifyBin(tab, i);
					}
					break;
				}
			}
		}
	}
	if (delta != 0) {
		addCount((int64_t)delta, binCount);
	}
	return $of(val);
}

$Object* ConcurrentHashMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || value == nullptr || remappingFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t h = spread($nc($of(key))->hashCode());
	$var($Object, val, nullptr);
	int32_t delta = 0;
	int32_t binCount = 0;
	{
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t n = 0;
			int32_t i = 0;
			int32_t fh = 0;
			if (tab == nullptr || (n = $nc(tab)->length) == 0) {
				$assign(tab, initTable());
			} else if (($assign(f, tabAt(tab, i = (int32_t)((n - 1) & (uint32_t)h)))) == nullptr) {
				if (casTabAt(tab, i, nullptr, $$new($ConcurrentHashMap$Node, h, key, value))) {
					delta = 1;
					$assign(val, value);
					break;
				}
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				$assign(tab, helpTransfer(tab, f));
			} else {
				$synchronized(f) {
					if (tabAt(tab, i) == f) {
						if (fh >= 0) {
							binCount = 1;
							{
								$var($ConcurrentHashMap$Node, e, f);
								$var($ConcurrentHashMap$Node, pred, nullptr);
								for (;; ++binCount) {
									$var($Object, ek, nullptr);
									bool var$0 = e->hash == h;
									if (var$0) {
										bool var$1 = $equals($assign(ek, e->key), key);
										var$0 = (var$1 || (ek != nullptr && $nc($of(key))->equals(ek)));
									}
									if (var$0) {
										$assign(val, $nc(remappingFunction)->apply(e->val, value));
										if (val != nullptr) {
											$set(e, val, val);
										} else {
											delta = -1;
											$var($ConcurrentHashMap$Node, en, e->next);
											if (pred != nullptr) {
												$set(pred, next, en);
											} else {
												setTabAt(tab, i, en);
											}
										}
										break;
									}
									$assign(pred, e);
									if (($assign(e, e->next)) == nullptr) {
										delta = 1;
										$assign(val, value);
										$set(pred, next, $new($ConcurrentHashMap$Node, h, key, val));
										break;
									}
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
							binCount = 2;
							$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, f));
							$var($ConcurrentHashMap$TreeNode, r, t->root);
							$var($ConcurrentHashMap$TreeNode, p, (r == nullptr) ? ($ConcurrentHashMap$TreeNode*)nullptr : $nc(r)->findTreeNode(h, key, nullptr));
							$assign(val, (p == nullptr) ? $of(value) : $nc(remappingFunction)->apply($nc(p)->val, value));
							if (val != nullptr) {
								if (p != nullptr) {
									$set(p, val, val);
								} else {
									delta = 1;
									t->putTreeVal(h, key, val);
								}
							} else if (p != nullptr) {
								delta = -1;
								if (t->removeTreeNode(p)) {
									setTabAt(tab, i, $(untreeify(t->first)));
								}
							}
						} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
							$throwNew($IllegalStateException, "Recursive update"_s);
						}
					}
				}
				if (binCount != 0) {
					if (binCount >= ConcurrentHashMap::TREEIFY_THRESHOLD) {
						treeifyBin(tab, i);
					}
					break;
				}
			}
		}
	}
	if (delta != 0) {
		addCount((int64_t)delta, binCount);
	}
	return $of(val);
}

bool ConcurrentHashMap::contains(Object$* value) {
	return containsValue(value);
}

$Enumeration* ConcurrentHashMap::keys() {
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	int32_t f = ($assign(t, this->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$KeyIterator, t, f, 0, f, this);
}

$Enumeration* ConcurrentHashMap::elements() {
	$var($ConcurrentHashMap$NodeArray, t, nullptr);
	int32_t f = ($assign(t, this->table)) == nullptr ? 0 : $nc(t)->length;
	return $new($ConcurrentHashMap$ValueIterator, t, f, 0, f, this);
}

int64_t ConcurrentHashMap::mappingCount() {
	int64_t n = sumCount();
	return (n < (int64_t)0) ? (int64_t)0 : n;
}

$ConcurrentHashMap$KeySetView* ConcurrentHashMap::newKeySet() {
	$init(ConcurrentHashMap);
	$init($Boolean);
	return $new($ConcurrentHashMap$KeySetView, $$new(ConcurrentHashMap), $Boolean::TRUE);
}

$ConcurrentHashMap$KeySetView* ConcurrentHashMap::newKeySet(int32_t initialCapacity) {
	$init(ConcurrentHashMap);
	$init($Boolean);
	return $new($ConcurrentHashMap$KeySetView, $$new(ConcurrentHashMap, initialCapacity), $Boolean::TRUE);
}

$ConcurrentHashMap$KeySetView* ConcurrentHashMap::keySet(Object$* mappedValue) {
	if (mappedValue == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($ConcurrentHashMap$KeySetView, this, mappedValue);
}

int32_t ConcurrentHashMap::resizeStamp(int32_t n) {
	$init(ConcurrentHashMap);
	return $Integer::numberOfLeadingZeros(n) | ($sl(1, ConcurrentHashMap::RESIZE_STAMP_BITS - 1));
}

$ConcurrentHashMap$NodeArray* ConcurrentHashMap::initTable() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, tab, nullptr);
	int32_t sc = 0;
	while (true) {
		bool var$0 = ($assign(tab, this->table)) == nullptr;
		if (!(var$0 || $nc(tab)->length == 0)) {
			break;
		}
		{
			if ((sc = this->sizeCtl) < 0) {
				$Thread::yield();
			} else if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::SIZECTL, sc, -1)) {
				{
					$var($Throwable, var$1, nullptr);
					try {
						bool var$2 = ($assign(tab, this->table)) == nullptr;
						if (var$2 || tab->length == 0) {
							int32_t n = (sc > 0) ? sc : ConcurrentHashMap::DEFAULT_CAPACITY;
							$var($ConcurrentHashMap$NodeArray, nt, $new($ConcurrentHashMap$NodeArray, n));
							$set(this, table, ($assign(tab, nt)));
							sc = n - ((int32_t)((uint32_t)n >> 2));
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						this->sizeCtl = sc;
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
				break;
			}
		}
	}
	return tab;
}

void ConcurrentHashMap::addCount(int64_t x, int32_t check) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$CounterCellArray, cs, nullptr);
	int64_t b = 0;
	int64_t s = 0;
	bool var$0 = ($assign(cs, this->counterCells)) != nullptr;
	if (!var$0) {
		int64_t var$1 = ConcurrentHashMap::BASECOUNT;
		int64_t var$2 = b = this->baseCount;
		var$0 = !$nc(ConcurrentHashMap::U)->compareAndSetLong(this, var$1, var$2, s = b + x);
	}
	if (var$0) {
		$var($ConcurrentHashMap$CounterCell, c, nullptr);
		int64_t v = 0;
		int32_t m = 0;
		bool uncontended = true;
		bool var$4 = cs == nullptr || (m = $nc(cs)->length - 1) < 0;
		bool var$3 = var$4 || ($assign(c, $nc(cs)->get((int32_t)($ThreadLocalRandom::getProbe() & (uint32_t)m)))) == nullptr;
		if (!var$3) {
			$var($Object, var$5, $of(c));
			int64_t var$6 = ConcurrentHashMap::CELLVALUE;
			int64_t var$7 = v = $nc(c)->value;
			var$3 = !(uncontended = $nc(ConcurrentHashMap::U)->compareAndSetLong(var$5, var$6, var$7, v + x));
		}
		if (var$3) {
			fullAddCount(x, uncontended);
			return;
		}
		if (check <= 1) {
			return;
		}
		s = sumCount();
	}
	if (check >= 0) {
		$var($ConcurrentHashMap$NodeArray, tab, nullptr);
		$var($ConcurrentHashMap$NodeArray, nt, nullptr);
		int32_t n = 0;
		int32_t sc = 0;
		while (true) {
			bool var$8 = s >= (int64_t)(sc = this->sizeCtl) && ($assign(tab, this->table)) != nullptr;
			if (!(var$8 && (n = $nc(tab)->length) < ConcurrentHashMap::MAXIMUM_CAPACITY)) {
				break;
			}
			{
				int32_t rs = $sl(resizeStamp(n), ConcurrentHashMap::RESIZE_STAMP_SHIFT);
				if (sc < 0) {
					if (sc == rs + ConcurrentHashMap::MAX_RESIZERS || sc == rs + 1 || ($assign(nt, this->nextTable)) == nullptr || this->transferIndex <= 0) {
						break;
					}
					if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::SIZECTL, sc, sc + 1)) {
						transfer(tab, nt);
					}
				} else if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::SIZECTL, sc, rs + 2)) {
					transfer(tab, nullptr);
				}
				s = sumCount();
			}
		}
	}
}

$ConcurrentHashMap$NodeArray* ConcurrentHashMap::helpTransfer($ConcurrentHashMap$NodeArray* tab, $ConcurrentHashMap$Node* f) {
	$var($ConcurrentHashMap$NodeArray, nextTab, nullptr);
	int32_t sc = 0;
	if (tab != nullptr && ($instanceOf($ConcurrentHashMap$ForwardingNode, f)) && ($assign(nextTab, $nc(($cast($ConcurrentHashMap$ForwardingNode, f)))->nextTable)) != nullptr) {
		int32_t rs = $sl(resizeStamp(tab->length), ConcurrentHashMap::RESIZE_STAMP_SHIFT);
		while (nextTab == this->nextTable && this->table == tab && (sc = this->sizeCtl) < 0) {
			if (sc == rs + ConcurrentHashMap::MAX_RESIZERS || sc == rs + 1 || this->transferIndex <= 0) {
				break;
			}
			if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::SIZECTL, sc, sc + 1)) {
				transfer(tab, nextTab);
				break;
			}
		}
		return nextTab;
	}
	return this->table;
}

void ConcurrentHashMap::tryPresize(int32_t size) {
	$useLocalCurrentObjectStackCache();
	int32_t c = (size >= ((int32_t)((uint32_t)ConcurrentHashMap::MAXIMUM_CAPACITY >> 1))) ? ConcurrentHashMap::MAXIMUM_CAPACITY : tableSizeFor(size + ((int32_t)((uint32_t)size >> 1)) + 1);
	int32_t sc = 0;
	while ((sc = this->sizeCtl) >= 0) {
		$var($ConcurrentHashMap$NodeArray, tab, this->table);
		int32_t n = 0;
		if (tab == nullptr || (n = $nc(tab)->length) == 0) {
			n = (sc > c) ? sc : c;
			if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::SIZECTL, sc, -1)) {
				{
					$var($Throwable, var$0, nullptr);
					try {
						if (this->table == tab) {
							$var($ConcurrentHashMap$NodeArray, nt, $new($ConcurrentHashMap$NodeArray, n));
							$set(this, table, nt);
							sc = n - ((int32_t)((uint32_t)n >> 2));
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						this->sizeCtl = sc;
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} else if (c <= sc || n >= ConcurrentHashMap::MAXIMUM_CAPACITY) {
			break;
		} else if (tab == this->table) {
			int32_t rs = resizeStamp(n);
			if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::SIZECTL, sc, ($sl(rs, ConcurrentHashMap::RESIZE_STAMP_SHIFT)) + 2)) {
				transfer(tab, nullptr);
			}
		}
	}
}

void ConcurrentHashMap::transfer($ConcurrentHashMap$NodeArray* tab, $ConcurrentHashMap$NodeArray* nextTab$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$NodeArray, nextTab, nextTab$renamed);
	int32_t n = $nc(tab)->length;
	int32_t stride = 0;
	if ((stride = (ConcurrentHashMap::NCPU > 1) ? $div(((int32_t)((uint32_t)n >> 3)), ConcurrentHashMap::NCPU) : n) < ConcurrentHashMap::MIN_TRANSFER_STRIDE) {
		stride = ConcurrentHashMap::MIN_TRANSFER_STRIDE;
	}
	if (nextTab == nullptr) {
		try {
			$var($ConcurrentHashMap$NodeArray, nt, $new($ConcurrentHashMap$NodeArray, n << 1));
			$assign(nextTab, nt);
		} catch ($Throwable&) {
			$var($Throwable, ex, $catch());
			this->sizeCtl = $Integer::MAX_VALUE;
			return;
		}
		$set(this, nextTable, nextTab);
		this->transferIndex = n;
	}
	int32_t nextn = $nc(nextTab)->length;
	$var($ConcurrentHashMap$ForwardingNode, fwd, $new($ConcurrentHashMap$ForwardingNode, nextTab));
	bool advance = true;
	bool finishing = false;
	{
		int32_t i = 0;
		int32_t bound = 0;
		for (;;) {
			$var($ConcurrentHashMap$Node, f, nullptr);
			int32_t fh = 0;
			while (advance) {
				int32_t nextIndex = 0;
				int32_t nextBound = 0;
				if (--i >= bound || finishing) {
					advance = false;
				} else if ((nextIndex = this->transferIndex) <= 0) {
					i = -1;
					advance = false;
				} else if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::TRANSFERINDEX, nextIndex, nextBound = (nextIndex > stride ? nextIndex - stride : 0))) {
					bound = nextBound;
					i = nextIndex - 1;
					advance = false;
				}
			}
			if (i < 0 || i >= n || i + n >= nextn) {
				int32_t sc = 0;
				if (finishing) {
					$set(this, nextTable, nullptr);
					$set(this, table, nextTab);
					this->sizeCtl = (n << 1) - ((int32_t)((uint32_t)n >> 1));
					return;
				}
				int64_t var$0 = ConcurrentHashMap::SIZECTL;
				int32_t var$1 = sc = this->sizeCtl;
				if ($nc(ConcurrentHashMap::U)->compareAndSetInt(this, var$0, var$1, sc - 1)) {
					if ((sc - 2) != $sl(resizeStamp(n), ConcurrentHashMap::RESIZE_STAMP_SHIFT)) {
						return;
					}
					finishing = (advance = true);
					i = n;
				}
			} else if (($assign(f, tabAt(tab, i))) == nullptr) {
				advance = casTabAt(tab, i, nullptr, fwd);
			} else if ((fh = $nc(f)->hash) == ConcurrentHashMap::MOVED) {
				advance = true;
			} else {
				$synchronized(f) {
					if (tabAt(tab, i) == f) {
						$var($ConcurrentHashMap$Node, ln, nullptr);
						$var($ConcurrentHashMap$Node, hn, nullptr);
						if (fh >= 0) {
							int32_t runBit = (int32_t)(fh & (uint32_t)n);
							$var($ConcurrentHashMap$Node, lastRun, f);
							{
								$var($ConcurrentHashMap$Node, p, f->next);
								for (; p != nullptr; $assign(p, $nc(p)->next)) {
									int32_t b = (int32_t)(p->hash & (uint32_t)n);
									if (b != runBit) {
										runBit = b;
										$assign(lastRun, p);
									}
								}
							}
							if (runBit == 0) {
								$assign(ln, lastRun);
								$assign(hn, nullptr);
							} else {
								$assign(hn, lastRun);
								$assign(ln, nullptr);
							}
							{
								$var($ConcurrentHashMap$Node, p, f);
								for (; p != lastRun; $assign(p, p->next)) {
									int32_t ph = $nc(p)->hash;
									$var($Object, pk, p->key);
									$var($Object, pv, p->val);
									if (((int32_t)(ph & (uint32_t)n)) == 0) {
										$assign(ln, $new($ConcurrentHashMap$Node, ph, pk, pv, ln));
									} else {
										$assign(hn, $new($ConcurrentHashMap$Node, ph, pk, pv, hn));
									}
								}
							}
							setTabAt(nextTab, i, ln);
							setTabAt(nextTab, i + n, hn);
							setTabAt(tab, i, fwd);
							advance = true;
						} else if ($instanceOf($ConcurrentHashMap$TreeBin, f)) {
							$var($ConcurrentHashMap$TreeBin, t, $cast($ConcurrentHashMap$TreeBin, f));
							$var($ConcurrentHashMap$TreeNode, lo, nullptr);
							$var($ConcurrentHashMap$TreeNode, loTail, nullptr);
							$var($ConcurrentHashMap$TreeNode, hi, nullptr);
							$var($ConcurrentHashMap$TreeNode, hiTail, nullptr);
							int32_t lc = 0;
							int32_t hc = 0;
							{
								$var($ConcurrentHashMap$Node, e, t->first);
								for (; e != nullptr; $assign(e, $nc(e)->next)) {
									int32_t h = e->hash;
									$var($ConcurrentHashMap$TreeNode, p, $new($ConcurrentHashMap$TreeNode, h, e->key, e->val, nullptr, nullptr));
									if (((int32_t)(h & (uint32_t)n)) == 0) {
										if (($assignField(p, prev, loTail)) == nullptr) {
											$assign(lo, p);
										} else {
											$set($nc(loTail), next, p);
										}
										$assign(loTail, p);
										++lc;
									} else {
										if (($assignField(p, prev, hiTail)) == nullptr) {
											$assign(hi, p);
										} else {
											$set($nc(hiTail), next, p);
										}
										$assign(hiTail, p);
										++hc;
									}
								}
							}
							$assign(ln, (lc <= ConcurrentHashMap::UNTREEIFY_THRESHOLD) ? untreeify(lo) : (hc != 0) ? static_cast<$ConcurrentHashMap$Node*>($new($ConcurrentHashMap$TreeBin, lo)) : static_cast<$ConcurrentHashMap$Node*>(t));
							$assign(hn, (hc <= ConcurrentHashMap::UNTREEIFY_THRESHOLD) ? untreeify(hi) : (lc != 0) ? static_cast<$ConcurrentHashMap$Node*>($new($ConcurrentHashMap$TreeBin, hi)) : static_cast<$ConcurrentHashMap$Node*>(t));
							setTabAt(nextTab, i, ln);
							setTabAt(nextTab, i + n, hn);
							setTabAt(tab, i, fwd);
							advance = true;
						} else if ($instanceOf($ConcurrentHashMap$ReservationNode, f)) {
							$throwNew($IllegalStateException, "Recursive update"_s);
						}
					}
				}
			}
		}
	}
}

int64_t ConcurrentHashMap::sumCount() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$CounterCellArray, cs, this->counterCells);
	int64_t sum = this->baseCount;
	if (cs != nullptr) {
		{
			$var($ConcurrentHashMap$CounterCellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ConcurrentHashMap$CounterCell, c, arr$->get(i$));
				if (c != nullptr) {
					sum += c->value;
				}
			}
		}
	}
	return sum;
}

void ConcurrentHashMap::fullAddCount(int64_t x, bool wasUncontended) {
	$useLocalCurrentObjectStackCache();
	int32_t h = 0;
	if ((h = $ThreadLocalRandom::getProbe()) == 0) {
		$ThreadLocalRandom::localInit();
		h = $ThreadLocalRandom::getProbe();
		wasUncontended = true;
	}
	bool collide = false;
	for (;;) {
		$var($ConcurrentHashMap$CounterCellArray, cs, nullptr);
		$var($ConcurrentHashMap$CounterCell, c, nullptr);
		int32_t n = 0;
		int64_t v = 0;
		bool var$0 = ($assign(cs, this->counterCells)) != nullptr;
		if (var$0 && (n = $nc(cs)->length) > 0) {
			if (($assign(c, cs->get((int32_t)((n - 1) & (uint32_t)h)))) == nullptr) {
				if (this->cellsBusy == 0) {
					$var($ConcurrentHashMap$CounterCell, r, $new($ConcurrentHashMap$CounterCell, x));
					if (this->cellsBusy == 0 && $nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::CELLSBUSY, 0, 1)) {
						bool created = false;
						{
							$var($Throwable, var$1, nullptr);
							try {
								$var($ConcurrentHashMap$CounterCellArray, rs, nullptr);
								int32_t m = 0;
								int32_t j = 0;
								bool var$3 = ($assign(rs, this->counterCells)) != nullptr;
								bool var$2 = var$3 && (m = $nc(rs)->length) > 0;
								if (var$2 && rs->get(j = (int32_t)((m - 1) & (uint32_t)h)) == nullptr) {
									rs->set(j, r);
									created = true;
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								this->cellsBusy = 0;
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
						if (created) {
							break;
						}
						continue;
					}
				}
				collide = false;
			} else if (!wasUncontended) {
				wasUncontended = true;
			} else {
				$var($Object, var$7, $of(c));
				int64_t var$8 = ConcurrentHashMap::CELLVALUE;
				int64_t var$9 = v = $nc(c)->value;
				if ($nc(ConcurrentHashMap::U)->compareAndSetLong(var$7, var$8, var$9, v + x)) {
					break;
				} else if (this->counterCells != cs || n >= ConcurrentHashMap::NCPU) {
					collide = false;
				} else if (!collide) {
					collide = true;
				} else if (this->cellsBusy == 0 && $nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::CELLSBUSY, 0, 1)) {
					{
						$var($Throwable, var$10, nullptr);
						try {
							if (this->counterCells == cs) {
								$set(this, counterCells, $fcast($ConcurrentHashMap$CounterCellArray, $Arrays::copyOf(cs, n << 1)));
							}
						} catch ($Throwable&) {
							$assign(var$10, $catch());
						} /*finally*/ {
							this->cellsBusy = 0;
						}
						if (var$10 != nullptr) {
							$throw(var$10);
						}
					}
					collide = false;
					continue;
				}
			}
			h = $ThreadLocalRandom::advanceProbe(h);
		} else if (this->cellsBusy == 0 && this->counterCells == cs && $nc(ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap::CELLSBUSY, 0, 1)) {
			bool init = false;
			{
				$var($Throwable, var$11, nullptr);
				try {
					if (this->counterCells == cs) {
						$var($ConcurrentHashMap$CounterCellArray, rs, $new($ConcurrentHashMap$CounterCellArray, 2));
						rs->set((int32_t)(h & (uint32_t)1), $$new($ConcurrentHashMap$CounterCell, x));
						$set(this, counterCells, rs);
						init = true;
					}
				} catch ($Throwable&) {
					$assign(var$11, $catch());
				} /*finally*/ {
					this->cellsBusy = 0;
				}
				if (var$11 != nullptr) {
					$throw(var$11);
				}
			}
			if (init) {
				break;
			}
		} else {
			int64_t var$14 = ConcurrentHashMap::BASECOUNT;
			int64_t var$15 = v = this->baseCount;
			if ($nc(ConcurrentHashMap::U)->compareAndSetLong(this, var$14, var$15, v + x)) {
				break;
			}
		}
	}
}

void ConcurrentHashMap::treeifyBin($ConcurrentHashMap$NodeArray* tab, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$Node, b, nullptr);
	int32_t n = 0;
	if (tab != nullptr) {
		if ((n = tab->length) < ConcurrentHashMap::MIN_TREEIFY_CAPACITY) {
			tryPresize(n << 1);
		} else if (($assign(b, tabAt(tab, index))) != nullptr && $nc(b)->hash >= 0) {
			$synchronized(b) {
				if (tabAt(tab, index) == b) {
					$var($ConcurrentHashMap$TreeNode, hd, nullptr);
					$var($ConcurrentHashMap$TreeNode, tl, nullptr);
					{
						$var($ConcurrentHashMap$Node, e, b);
						for (; e != nullptr; $assign(e, e->next)) {
							$var($ConcurrentHashMap$TreeNode, p, $new($ConcurrentHashMap$TreeNode, $nc(e)->hash, e->key, e->val, nullptr, nullptr));
							if (($assignField(p, prev, tl)) == nullptr) {
								$assign(hd, p);
							} else {
								$set($nc(tl), next, p);
							}
							$assign(tl, p);
						}
					}
					setTabAt(tab, index, $$new($ConcurrentHashMap$TreeBin, hd));
				}
			}
		}
	}
}

$ConcurrentHashMap$Node* ConcurrentHashMap::untreeify($ConcurrentHashMap$Node* b) {
	$init(ConcurrentHashMap);
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentHashMap$Node, hd, nullptr);
	$var($ConcurrentHashMap$Node, tl, nullptr);
	{
		$var($ConcurrentHashMap$Node, q, b);
		for (; q != nullptr; $assign(q, $nc(q)->next)) {
			$var($ConcurrentHashMap$Node, p, $new($ConcurrentHashMap$Node, q->hash, q->key, q->val));
			if (tl == nullptr) {
				$assign(hd, p);
			} else {
				$set($nc(tl), next, p);
			}
			$assign(tl, p);
		}
	}
	return hd;
}

int32_t ConcurrentHashMap::batchFor(int64_t b) {
	int64_t n = 0;
	if (b == $Long::MAX_VALUE || (n = sumCount()) <= (int64_t)1 || n < b) {
		return 0;
	}
	int32_t sp = $ForkJoinPool::getCommonPoolParallelism() << 2;
	return (b <= (int64_t)0 || (n /= b) >= sp) ? sp : (int32_t)n;
}

void ConcurrentHashMap::forEach(int64_t parallelismThreshold, $BiConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachMappingTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, action)->invoke();
}

void ConcurrentHashMap::forEach(int64_t parallelismThreshold, $BiFunction* transformer, $Consumer* action) {
	if (transformer == nullptr || action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachTransformedMappingTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, transformer, action)->invoke();
}

$Object* ConcurrentHashMap::search(int64_t parallelismThreshold, $BiFunction* searchFunction) {
	$useLocalCurrentObjectStackCache();
	if (searchFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t var$0 = batchFor(parallelismThreshold);
	$var($ConcurrentHashMap$NodeArray, var$1, this->table);
	$var($BiFunction, var$2, searchFunction);
	return $of($$new($ConcurrentHashMap$SearchMappingsTask, nullptr, var$0, 0, 0, var$1, var$2, $$new($AtomicReference))->invoke());
}

$Object* ConcurrentHashMap::reduce(int64_t parallelismThreshold, $BiFunction* transformer, $BiFunction* reducer) {
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($$new($ConcurrentHashMap$MapReduceMappingsTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, reducer)->invoke());
}

double ConcurrentHashMap::reduceToDouble(int64_t parallelismThreshold, $ToDoubleBiFunction* transformer, double basis, $DoubleBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Double, $($$new($ConcurrentHashMap$MapReduceMappingsToDoubleTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->doubleValue();
}

int64_t ConcurrentHashMap::reduceToLong(int64_t parallelismThreshold, $ToLongBiFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Long, $($$new($ConcurrentHashMap$MapReduceMappingsToLongTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->longValue();
}

int32_t ConcurrentHashMap::reduceToInt(int64_t parallelismThreshold, $ToIntBiFunction* transformer, int32_t basis, $IntBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Integer, $($$new($ConcurrentHashMap$MapReduceMappingsToIntTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->intValue();
}

void ConcurrentHashMap::forEachKey(int64_t parallelismThreshold, $Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachKeyTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, action)->invoke();
}

void ConcurrentHashMap::forEachKey(int64_t parallelismThreshold, $Function* transformer, $Consumer* action) {
	if (transformer == nullptr || action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachTransformedKeyTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, transformer, action)->invoke();
}

$Object* ConcurrentHashMap::searchKeys(int64_t parallelismThreshold, $Function* searchFunction) {
	$useLocalCurrentObjectStackCache();
	if (searchFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t var$0 = batchFor(parallelismThreshold);
	$var($ConcurrentHashMap$NodeArray, var$1, this->table);
	$var($Function, var$2, searchFunction);
	return $of($$new($ConcurrentHashMap$SearchKeysTask, nullptr, var$0, 0, 0, var$1, var$2, $$new($AtomicReference))->invoke());
}

$Object* ConcurrentHashMap::reduceKeys(int64_t parallelismThreshold, $BiFunction* reducer) {
	if (reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($$new($ConcurrentHashMap$ReduceKeysTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, reducer)->invoke());
}

$Object* ConcurrentHashMap::reduceKeys(int64_t parallelismThreshold, $Function* transformer, $BiFunction* reducer) {
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($$new($ConcurrentHashMap$MapReduceKeysTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, reducer)->invoke());
}

double ConcurrentHashMap::reduceKeysToDouble(int64_t parallelismThreshold, $ToDoubleFunction* transformer, double basis, $DoubleBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Double, $($$new($ConcurrentHashMap$MapReduceKeysToDoubleTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->doubleValue();
}

int64_t ConcurrentHashMap::reduceKeysToLong(int64_t parallelismThreshold, $ToLongFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Long, $($$new($ConcurrentHashMap$MapReduceKeysToLongTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->longValue();
}

int32_t ConcurrentHashMap::reduceKeysToInt(int64_t parallelismThreshold, $ToIntFunction* transformer, int32_t basis, $IntBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Integer, $($$new($ConcurrentHashMap$MapReduceKeysToIntTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->intValue();
}

void ConcurrentHashMap::forEachValue(int64_t parallelismThreshold, $Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachValueTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, action)->invoke();
}

void ConcurrentHashMap::forEachValue(int64_t parallelismThreshold, $Function* transformer, $Consumer* action) {
	if (transformer == nullptr || action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachTransformedValueTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, transformer, action)->invoke();
}

$Object* ConcurrentHashMap::searchValues(int64_t parallelismThreshold, $Function* searchFunction) {
	$useLocalCurrentObjectStackCache();
	if (searchFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t var$0 = batchFor(parallelismThreshold);
	$var($ConcurrentHashMap$NodeArray, var$1, this->table);
	$var($Function, var$2, searchFunction);
	return $of($$new($ConcurrentHashMap$SearchValuesTask, nullptr, var$0, 0, 0, var$1, var$2, $$new($AtomicReference))->invoke());
}

$Object* ConcurrentHashMap::reduceValues(int64_t parallelismThreshold, $BiFunction* reducer) {
	if (reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($$new($ConcurrentHashMap$ReduceValuesTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, reducer)->invoke());
}

$Object* ConcurrentHashMap::reduceValues(int64_t parallelismThreshold, $Function* transformer, $BiFunction* reducer) {
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($$new($ConcurrentHashMap$MapReduceValuesTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, reducer)->invoke());
}

double ConcurrentHashMap::reduceValuesToDouble(int64_t parallelismThreshold, $ToDoubleFunction* transformer, double basis, $DoubleBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Double, $($$new($ConcurrentHashMap$MapReduceValuesToDoubleTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->doubleValue();
}

int64_t ConcurrentHashMap::reduceValuesToLong(int64_t parallelismThreshold, $ToLongFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Long, $($$new($ConcurrentHashMap$MapReduceValuesToLongTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->longValue();
}

int32_t ConcurrentHashMap::reduceValuesToInt(int64_t parallelismThreshold, $ToIntFunction* transformer, int32_t basis, $IntBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Integer, $($$new($ConcurrentHashMap$MapReduceValuesToIntTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->intValue();
}

void ConcurrentHashMap::forEachEntry(int64_t parallelismThreshold, $Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachEntryTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, action)->invoke();
}

void ConcurrentHashMap::forEachEntry(int64_t parallelismThreshold, $Function* transformer, $Consumer* action) {
	if (transformer == nullptr || action == nullptr) {
		$throwNew($NullPointerException);
	}
	$$new($ConcurrentHashMap$ForEachTransformedEntryTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, transformer, action)->invoke();
}

$Object* ConcurrentHashMap::searchEntries(int64_t parallelismThreshold, $Function* searchFunction) {
	$useLocalCurrentObjectStackCache();
	if (searchFunction == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t var$0 = batchFor(parallelismThreshold);
	$var($ConcurrentHashMap$NodeArray, var$1, this->table);
	$var($Function, var$2, searchFunction);
	return $of($$new($ConcurrentHashMap$SearchEntriesTask, nullptr, var$0, 0, 0, var$1, var$2, $$new($AtomicReference))->invoke());
}

$Map$Entry* ConcurrentHashMap::reduceEntries(int64_t parallelismThreshold, $BiFunction* reducer) {
	if (reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $cast($Map$Entry, $$new($ConcurrentHashMap$ReduceEntriesTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, reducer)->invoke());
}

$Object* ConcurrentHashMap::reduceEntries(int64_t parallelismThreshold, $Function* transformer, $BiFunction* reducer) {
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $of($$new($ConcurrentHashMap$MapReduceEntriesTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, reducer)->invoke());
}

double ConcurrentHashMap::reduceEntriesToDouble(int64_t parallelismThreshold, $ToDoubleFunction* transformer, double basis, $DoubleBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Double, $($$new($ConcurrentHashMap$MapReduceEntriesToDoubleTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->doubleValue();
}

int64_t ConcurrentHashMap::reduceEntriesToLong(int64_t parallelismThreshold, $ToLongFunction* transformer, int64_t basis, $LongBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Long, $($$new($ConcurrentHashMap$MapReduceEntriesToLongTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->longValue();
}

int32_t ConcurrentHashMap::reduceEntriesToInt(int64_t parallelismThreshold, $ToIntFunction* transformer, int32_t basis, $IntBinaryOperator* reducer) {
	$useLocalCurrentObjectStackCache();
	if (transformer == nullptr || reducer == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(($cast($Integer, $($$new($ConcurrentHashMap$MapReduceEntriesToIntTask, nullptr, batchFor(parallelismThreshold), 0, 0, this->table, nullptr, transformer, basis, reducer)->invoke()))))->intValue();
}

void clinit$ConcurrentHashMap($Class* class$) {
	$useLocalCurrentObjectStackCache();
	ConcurrentHashMap::LOAD_FACTOR = 0.75f;
	ConcurrentHashMap::NCPU = $nc($($Runtime::getRuntime()))->availableProcessors();
		$load($ConcurrentHashMap$SegmentArray);
		$init($Integer);
	$assignStatic(ConcurrentHashMap::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "segments"_s, $getClass($ConcurrentHashMap$SegmentArray)),
		$$new($ObjectStreamField, "segmentMask"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "segmentShift"_s, $Integer::TYPE)
	}));
	$assignStatic(ConcurrentHashMap::U, $Unsafe::getUnsafe());
	ConcurrentHashMap::SIZECTL = $nc(ConcurrentHashMap::U)->objectFieldOffset(ConcurrentHashMap::class$, "sizeCtl"_s);
	ConcurrentHashMap::TRANSFERINDEX = $nc(ConcurrentHashMap::U)->objectFieldOffset(ConcurrentHashMap::class$, "transferIndex"_s);
	ConcurrentHashMap::BASECOUNT = $nc(ConcurrentHashMap::U)->objectFieldOffset(ConcurrentHashMap::class$, "baseCount"_s);
	ConcurrentHashMap::CELLSBUSY = $nc(ConcurrentHashMap::U)->objectFieldOffset(ConcurrentHashMap::class$, "cellsBusy"_s);
	$load($ConcurrentHashMap$CounterCell);
	ConcurrentHashMap::CELLVALUE = $nc(ConcurrentHashMap::U)->objectFieldOffset($ConcurrentHashMap$CounterCell::class$, "value"_s);
	$load($ConcurrentHashMap$NodeArray);
	ConcurrentHashMap::ABASE = $nc(ConcurrentHashMap::U)->arrayBaseOffset($getClass($ConcurrentHashMap$NodeArray));
	{
		int32_t scale = $nc(ConcurrentHashMap::U)->arrayIndexScale($getClass($ConcurrentHashMap$NodeArray));
		if (((int32_t)(scale & (uint32_t)(scale - 1))) != 0) {
			$throwNew($ExceptionInInitializerError, "array index scale not a power of two"_s);
		}
		ConcurrentHashMap::ASHIFT = 31 - $Integer::numberOfLeadingZeros(scale);
		$load($LockSupport);
		$Class* ensureLoaded = $LockSupport::class$;
		$load($ConcurrentHashMap$ReservationNode);
		ensureLoaded = $ConcurrentHashMap$ReservationNode::class$;
	}
}

ConcurrentHashMap::ConcurrentHashMap() {
}

$Class* ConcurrentHashMap::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap, name, initialize, &_ConcurrentHashMap_ClassInfo_, clinit$ConcurrentHashMap, allocate$ConcurrentHashMap);
	return class$;
}

$Class* ConcurrentHashMap::class$ = nullptr;

		} // concurrent
	} // util
} // java