import React, { Component } from 'react';

class state extends Component {

    constructor(){
        super();
        this.state={name:'tops',movies:'3 idiots',counter:0}
        // this.state={counter:0}
    }
    btnclck=()=>{
        console.log("call");
        this.setState({name:'react class'})   
    }

    clchandle=()=>{
        this.setState({counter:this.state.counter+1})
    }

    remove=()=>{
        this.setState({counter:0})
    }
    render() {
        return (
            <>
            <div className='container'>
                <div className='row mt-5'>
                    <div className='col'>
                        <h1>{this.state.name}</h1>
                        <button className='btn btn-primary' onClick={this.btnclck}>click </button>
                        <h1>{this.state.movies}</h1>
                        <button className='btn btn-warning' onClick={()=>this.setState({movies:'2 states'})}>movie chamge</button>
                        <h1>{this.state.counter}</h1>
                        <button className='btn btn-success' onClick={this.clchandle}>number</button>
                        <button className='btn btn-primary' onClick={()=>this.setState({counter:this.state.counter-1})}>down</button>
                        <button className='btn btn-warning' onClick={this.remove}>all remove</button>

                    </div>

                </div>
            </div>
            </>
        );
    }
}

export default state;