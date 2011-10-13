#ifndef DLT_SYSTEM_LOG_H
#define DLT_SYSTEM_LOG_H

extern void dlt_system_filetransfer_init(DltSystemOptions *options,DltSystemRuntime *runtime);
extern void dlt_system_filetransfer_run(DltSystemOptions *options,DltSystemRuntime *runtime,DltContext *context);

extern void dlt_system_log_file(DltSystemOptions *options,DltContext *context,int num);
extern void dlt_system_log_process(DltSystemOptions *options,DltContext *context,int num);

#endif /* DLT_SYSTEM_LOG_H */