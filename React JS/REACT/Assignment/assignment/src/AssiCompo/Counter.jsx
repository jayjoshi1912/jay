import React, { useState } from 'react';

function Counter(props) {
    const[count,setcount]=useState(0)
    // const remove=()=>{
    //     setcount(count)
    // }
    return (
        <>
           <div className="container">
            <div className="row">
                <div className="col">
                    <h1>{count}</h1>
                    <button className='btn btn-success' onClick={()=>setcount(count+1)}>increment</button>
                    <button className='btn btn-primary' onClick={()=>setcount(count-1)}>dicrement</button>
                    <button className='btn btn-warning' onClick={()=>setcount(0)}>clear</button>
                </div>
            </div>
            </div> 
        </>
    );
}

export default Counter;