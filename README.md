# check_gc

This cpp script takes the stdout of zcat fastq.gz files.

To use on one file:
zcat sample1.fastq.gz | calculate_gc > sample1_gc.txt

To run in parallel example:
ls /mnt/cgs-fs3/Sequencing/Analysis/NGS-K.OShaughnessy-40082/run_may16/rawReads/*/*_R*fastq.gz | sed 's/.*\///g' | sed 's/_R._001.fastq.gz//g' | uniq | parallel -j 4 --no-notice "zcat /mnt/cgs-fs3/Sequencing/Analysis/NGS-K.OShaughnessy-40082/run_may16/rawReads/{}/{}_R1_001.fastq.gz | calculate_gc > rawReads/{}_R1_gc.txt"

Output Table:
Tab separated matrix with read_name, read_length, gc_content. 

Example output:
mjg225@zoidberg:~/gc_kevin/rawReads> head sample_15-RPT_S1_R1_gc.txt 
@NS500125:254:H33MKBGXY:1:11101:19966:1043 1:N:0:ATCACN	76	0.171053
@NS500125:254:H33MKBGXY:1:11101:16205:1043 1:N:0:ATCACN	75	0.213333
@NS500125:254:H33MKBGXY:1:11101:22356:1044 1:N:0:ATCACN	75	0.266667
@NS500125:254:H33MKBGXY:1:11101:3831:1044 1:N:0:ATCACN	75	0.2
@NS500125:254:H33MKBGXY:1:11101:17047:1044 1:N:0:ATCACN	75	0.266667
@NS500125:254:H33MKBGXY:1:11101:22772:1044 1:N:0:ATCACN	75	0.226667
@NS500125:254:H33MKBGXY:1:11101:8970:1045 1:N:0:ATCACN	75	0.44
@NS500125:254:H33MKBGXY:1:11101:19007:1045 1:N:0:ATCACN	75	0.173333
@NS500125:254:H33MKBGXY:1:11101:22829:1045 1:N:0:ATCACN	75	0.213333
@NS500125:254:H33MKBGXY:1:11101:20590:1045 1:N:0:ATCACN	75	0.346667

