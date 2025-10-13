#ifndef _java_util_stream_Nodes_h_
#define _java_util_stream_Nodes_h_
//$ class java.util.stream.Nodes
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("BAD_SIZE")
#undef BAD_SIZE
#pragma push_macro("EMPTY_DOUBLE_ARRAY")
#undef EMPTY_DOUBLE_ARRAY
#pragma push_macro("EMPTY_DOUBLE_NODE")
#undef EMPTY_DOUBLE_NODE
#pragma push_macro("EMPTY_INT_ARRAY")
#undef EMPTY_INT_ARRAY
#pragma push_macro("EMPTY_INT_NODE")
#undef EMPTY_INT_NODE
#pragma push_macro("EMPTY_LONG_ARRAY")
#undef EMPTY_LONG_ARRAY
#pragma push_macro("EMPTY_LONG_NODE")
#undef EMPTY_LONG_NODE
#pragma push_macro("EMPTY_NODE")
#undef EMPTY_NODE
#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE

namespace java {
	namespace util {
		class Collection;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Node;
			class Node$Builder;
			class Node$Builder$OfDouble;
			class Node$Builder$OfInt;
			class Node$Builder$OfLong;
			class Node$OfDouble;
			class Node$OfInt;
			class Node$OfLong;
			class PipelineHelper;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes : public ::java::lang::Object {
	$class(Nodes, 0, ::java::lang::Object)
public:
	Nodes();
	void init$();
	static ::java::util::stream::Node$Builder* builder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator);
	static ::java::util::stream::Node$Builder* builder();
	static ::java::util::function::IntFunction* castingArray();
	static ::java::util::stream::Node* collect(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree, ::java::util::function::IntFunction* generator);
	static ::java::util::stream::Node$OfDouble* collectDouble(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree);
	static ::java::util::stream::Node$OfInt* collectInt(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree);
	static ::java::util::stream::Node$OfLong* collectLong(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree);
	static ::java::util::stream::Node* conc(::java::util::stream::StreamShape* shape, ::java::util::stream::Node* left, ::java::util::stream::Node* right);
	static ::java::util::stream::Node$Builder$OfDouble* doubleBuilder(int64_t exactSizeIfKnown);
	static ::java::util::stream::Node$Builder$OfDouble* doubleBuilder();
	static ::java::util::stream::Node* emptyNode(::java::util::stream::StreamShape* shape);
	static ::java::util::stream::Node* flatten(::java::util::stream::Node* node, ::java::util::function::IntFunction* generator);
	static ::java::util::stream::Node$OfDouble* flattenDouble(::java::util::stream::Node$OfDouble* node);
	static ::java::util::stream::Node$OfInt* flattenInt(::java::util::stream::Node$OfInt* node);
	static ::java::util::stream::Node$OfLong* flattenLong(::java::util::stream::Node$OfLong* node);
	static ::java::util::stream::Node$Builder$OfInt* intBuilder(int64_t exactSizeIfKnown);
	static ::java::util::stream::Node$Builder$OfInt* intBuilder();
	static $ObjectArray* lambda$castingArray$0(int32_t size);
	static ::java::util::stream::Node$Builder$OfLong* longBuilder(int64_t exactSizeIfKnown);
	static ::java::util::stream::Node$Builder$OfLong* longBuilder();
	static ::java::util::stream::Node* node($ObjectArray* array);
	static ::java::util::stream::Node* node(::java::util::Collection* c);
	static ::java::util::stream::Node$OfInt* node($ints* array);
	static ::java::util::stream::Node$OfLong* node($longs* array);
	static ::java::util::stream::Node$OfDouble* node($doubles* array);
	static const int64_t MAX_ARRAY_SIZE = 2147483639; // ::java::lang::Integer::MAX_VALUE - 8
	static $String* BAD_SIZE;
	static ::java::util::stream::Node* EMPTY_NODE;
	static ::java::util::stream::Node$OfInt* EMPTY_INT_NODE;
	static ::java::util::stream::Node$OfLong* EMPTY_LONG_NODE;
	static ::java::util::stream::Node$OfDouble* EMPTY_DOUBLE_NODE;
	static $ints* EMPTY_INT_ARRAY;
	static $longs* EMPTY_LONG_ARRAY;
	static $doubles* EMPTY_DOUBLE_ARRAY;
};

		} // stream
	} // util
} // java

#pragma pop_macro("BAD_SIZE")
#pragma pop_macro("EMPTY_DOUBLE_ARRAY")
#pragma pop_macro("EMPTY_DOUBLE_NODE")
#pragma pop_macro("EMPTY_INT_ARRAY")
#pragma pop_macro("EMPTY_INT_NODE")
#pragma pop_macro("EMPTY_LONG_ARRAY")
#pragma pop_macro("EMPTY_LONG_NODE")
#pragma pop_macro("EMPTY_NODE")
#pragma pop_macro("MAX_ARRAY_SIZE")
#pragma pop_macro("MAX_VALUE")

#endif // _java_util_stream_Nodes_h_