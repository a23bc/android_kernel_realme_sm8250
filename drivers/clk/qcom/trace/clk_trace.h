/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022-2023, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#undef TRACE_SYSTEM
#define TRACE_SYSTEM clk_qcom

#if !defined(_TRACE_CLK_QCOM_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_CLK_QCOM_H

#include <linux/tracepoint.h>

TRACE_EVENT(clk_measure,

	TP_PROTO(const char *name, unsigned long rate),

	TP_ARGS(name, rate),

	TP_STRUCT__entry(
		__string(name, name)
		__field(unsigned long, rate)
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->rate = rate;
	),

	TP_printk("clk: %s rate: %lu", __get_str(name), __entry->rate)
);

#endif /* _TRACE_CLK_QCOM_H */

/* These must be outside the header guard */
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH trace

#undef TRACE_INCLUDE_FILE
#define TRACE_INCLUDE_FILE clk_trace

#include <trace/define_trace.h>

