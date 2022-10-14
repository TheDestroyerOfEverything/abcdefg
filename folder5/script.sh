awk 'BEGIN{max=$2}{if ($2 > max) max=$2}END{print max}' log*
